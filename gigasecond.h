// vim: ts=4:nu
//
// not too happy about all this boost stuff gumming up my c++
//
#include "boost/date_time/gregorian/gregorian.hpp"

namespace gigasecond
{
	boost::gregorian::date advance(const boost::gregorian::date &date);
}
