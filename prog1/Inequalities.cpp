#include "Inequalities.hpp" 

double maxi(double x, double y)
{
	if (x > y)
		return x;
	return y;
}
double mini(double x, double y)
{
	if (x < y)
		return x;
	return y;
}

double maxi(double x, double y, double z)
{
	return maxi(maxi(x, y), z);
}
double mini(double x, double y, double z)
{
	return mini(mini(x, y), z);
}
