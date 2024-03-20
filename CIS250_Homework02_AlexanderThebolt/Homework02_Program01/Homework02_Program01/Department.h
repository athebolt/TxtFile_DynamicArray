#pragma once
#include "string"

using namespace std;

class Department
{
private:
	int id = 0;
	string dName;
	string buildingLetter;
	int buildingFloor = 0;
	string departmentPhone;
public:
	Department();

	int getId() const;
	string getDName() const;
	string getBuildingLetter() const;
	int getBuildingFloor() const;
	string getDepartmentPhone() const;

	void setId(int);
	void setDName(string);
	void setBuildingLetter(string);
	void setBuildingFloor(int);
	void setDepartmentPhone(string);
};

