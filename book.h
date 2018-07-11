#ifndef BOOK_H
#define BOOK_H

#include "order.h"

class Book : public Order
{
public:
    Book(const std::string & a_title, float a_price,
         std::shared_ptr<const Order> reqBook = nullptr);
};

#endif // BOOK_H
