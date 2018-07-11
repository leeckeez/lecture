#include "book.h"

Book::Book(const std::string &a_title, float a_price, std::shared_ptr<const Order> reqBook):
    Order(a_title, a_price, reqBook)
{

}
