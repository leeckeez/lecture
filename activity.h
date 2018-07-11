#ifndef ACTIVITY_H
#define ACTIVITY_H

#include "order.h"
#include <QDateTime>

class Activity : public Order
{
public:
    Activity(const std::string & a_title, float a_price,
             std::shared_ptr<const Order> reqBook = nullptr,
             QDateTime start = QDateTime::currentDateTime(),
             QDateTime end = QDateTime::currentDateTime(),
             int max = 0);

private:
    QDateTime startMoment;
    QDateTime endMoment;
    int maxNrParticipants;
};

#endif // ACTIVITY_H
