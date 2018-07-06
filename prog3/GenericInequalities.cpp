#ifndef GenericInequalities_CPP
#define GenericInequalities_CPP
using namespace std;
#include "GenericInequalities.hpp"

// Max and Min of 2 numbers
template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y)
{
	if (x > y)
		return x;
	return y;
}
template <class Numeric>
Numeric Min(const Numeric& x, const Numeric& y)
{
	if (x < y)
		return x;
	return y;
}

// Max and Min of 3 numbers
template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z)
{
	return Max<Numeric>(Max<Numeric>(x, y), z);
}
template <class Numeric>
Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z)
{
	return Min<Numeric>(Min<Numeric>(x, y), z);
}

#endif
