#include "order.h"
#include <string>
#include <iostream>


Order::Order(const std::string & a_title, float a_price, std::shared_ptr<const Order> reqBook)
    :title{a_title},price{a_price}, required{reqBook}
{

}

Order::Order(const Order& rhs):title{rhs.getTitle()}, price{rhs.getPrice()}
{
    std::cout << "using copy ctor" << std::endl;
}

std::string Order::getTitle() const
{
    return title;
}

float Order::getPrice() const
{
    return price;
}

bool Order::operator ==(const Order & rhs)
{
    return (title == rhs.getTitle());
}

std::shared_ptr<const Order> Order::getRequired() const
{
    return required;
}
