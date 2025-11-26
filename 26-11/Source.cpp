#include <iostream>
#include<vector>
using namespace std;

class Employee
{
protected:
	string name;
	int age;
public:
	Employee(){}
	Employee(string n, int a)
	{
		name = n;
		age = a;
	}
	virtual double GetSalary()
	{
		return 10000.00;
	}
};

class Manager: public Employee
{
public:
	double GetSalary()
	{
		return 60000.00;
	}
};

class Developer : public Employee
{
public:
	double GetSalary()
	{
		return 30000.00;
	}
};

int main()
{
	vector<Employee> arr1;
	vector<Manager> arr2;
	vector<Developer> arr3;
}