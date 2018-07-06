#ifndef GenericInequalities_HPP
#define GenericInequalities_HPP

// max and min of 2 numbers
template <class Numeric>
	Numeric Max(const Numeric& x, const Numeric& y);
template <class Numeric>
	Numeric Min(const Numeric& x, const Numeric& y);
	
// max and min of 3 numbers
template <class Numeric>
	Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z);
template <class Numeric>
	Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z);
	
#endif
