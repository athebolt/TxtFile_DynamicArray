#include "Department.h"

Department::Department()
{
	
}

int Department::getId() const
{
	return id;
}
string Department::getDName() const
{
	return dName;
}
string Department::getBuildingLetter() const
{
	return buildingLetter;
}
int Department::getBuildingFloor() const
{
	return buildingFloor;
}
string Department::getDepartmentPhone() const
{
	return departmentPhone;
}

void Department::setId(int i)
{
	id = i;
}
void Department::setDName(string d)
{
	dName = d;
}
void Department::setBuildingLetter(string bl)
{
	buildingLetter = bl;
}
void Department::setBuildingFloor(int bf)
{
	buildingFloor = bf;
}
void Department::setDepartmentPhone(string dp)
{
	departmentPhone = dp;
}