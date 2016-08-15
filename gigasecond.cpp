// vim: ts=4:nu
//
#include "gigasecond.h"

namespace gigasecond
{
	boost::gregorian::date advance(const boost::gregorian::date &date)
	{
		static const unsigned long days_in_a_gigasecond = 1000000000 / (24 * 60 * 60);
		static const boost::gregorian::date_duration one_gigasecond(days_in_a_gigasecond);
		return date + one_gigasecond;
	}
}
