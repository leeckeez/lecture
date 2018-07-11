#ifndef Order_H
#define Order_H

#include <string>
#include <memory>


class Order
{
public:
    Order(const std::string & a_title, float a_price, std::shared_ptr<const Order> reqBook=nullptr);
    Order(const Order& rhs);
    std::string getTitle() const;
    float getPrice() const;
    std::shared_ptr<const Order> getRequired() const;

    bool operator==(const Order & rhs);

private:
    const std::string title;
    float price;
    std::shared_ptr<const Order> required;
};

#endif // Order_H
