#include "datasimdate.hpp"
#include "Person.hpp"
#inlcude <string>
using namespace std;

int main()
{
	DatasimDate myBirthday(15, 9, 1995);
	string myName("Rahul Padhy");
	Person dd(myName, myBirthday);
	dd.print();
	DatasimDate bBirthday(03, 4, 2004);
	string bName("Sai Rajiv");
	Person bd(bName, bBirthday);
	bd.print();
}
