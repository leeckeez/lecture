#include "student.h"
#include <iostream>
#include <sstream>

Student::Student(const std::string & a_name, Stage a_stage)
    :name{a_name},stage{a_stage}
{
    std::cout << "entering ctor of student" << std::endl;
}

Student::~Student()
{
    std::cout << "deleting student" << Student::getName() << std::endl;
}

Stage Student::getStage() const
{
    return stage;
}

void Student::setStage(Stage new_stage)
{
    stage = new_stage;
}

std::string Student::getName() const
{
    return Student::name;
}

int Student::addOrder(std::shared_ptr<const Order> newOrder)
{
    bool found = false;
    for(auto po : myOrders)
    {
        if(po == newOrder)
        {
            found = true;
            break;
        }
    }
    if(!found)
    {
        myOrders.push_back(newOrder);
        if(newOrder->getRequired() != nullptr)
            addOrder(newOrder.getRequired());
    }

    return myOrders.size();
}

std::string Student::listOrders() const
{
    //Order a_order;
    std::stringstream result;
    float total_price = 0.0f;
    result << "Overview of orders for " << this->name << std::endl;
    for(auto a_order : myOrders)
    {
        result << a_order->getTitle() << std::endl;
        total_price += a_order->getPrice();
    }
    result << "for a total price of " << total_price << std::endl;
    return result.str();
}
