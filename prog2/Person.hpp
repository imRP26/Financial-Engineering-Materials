#ifndef Person_HPP
#define Person_HPP

#include "datasimdate.hpp"
#include <string>

using namespace std;

class Person
{
	public:
		string nam;
		DatasimDate dob;
		DatasimDate createD;
		Person(const string& name, const DatasimDate& DateofBirth);
		void print() const;
		int age() const;
};

#endif
