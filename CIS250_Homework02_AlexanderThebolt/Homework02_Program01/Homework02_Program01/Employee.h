#pragma once
#include "Department.h"

using namespace std;

class Employee
{
private:
	Department dept;
	string ssn;
	string fName;
	string lName;
	string mInitial;
	string city;
	string state;
	int age;
	string gender;
public:
	Employee();

	string getSsn() const;
	string getFName() const;
	string getLName() const;
	string getMInitial() const;
	string getCity() const;
	string getState() const;
	int getAge() const;
	string getGender() const;
	int getDeptId() const;
	string getDeptName() const;
	string getDeptLetter() const;
	int getDeptFloor() const;
	string getDeptPhone() const;

	void setSsn(string);
	void setFName(string);
	void setLName(string);
	void setMInitial(string);
	void setCity(string);
	void setState(string);
	void setAge(int);
	void setGender(string);
	void setDeptId(int);
	void setDeptName(string);
	void setDeptLetter(string);
	void setDeptFloor(int);
	void setDeptPhone(string);
};

