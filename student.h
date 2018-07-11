#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <memory>
#include "order.h"

enum Stage{starter, inbetween, graduating};

class Student
{
public:
    Student(const std::string & a_name, Stage a_stage = starter);
    ~Student();
    Stage getStage() const;
    void setStage(Stage new_stage);
    std::string getName() const;
    int addOrder(std::shared_ptr<const Order> newOrder);
    std::string listOrders() const;

private:
    const std::string name;
    Stage stage;
    std::vector<std::shared_ptr<const Order>> myOrders;
};



#endif // STUDENT_H
