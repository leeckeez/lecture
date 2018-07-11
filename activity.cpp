#include "activity.h"
#include <sstream>

Activity::Activity(const std::string & a_name, float a_price,
                   std::shared_ptr<const Order> req,
                   QDateTime start, QDateTime end, int max):
    Order(a_name, a_price, req), startMoment{start}, endMoment{end}, maxNrParticipants{max}
{

}
