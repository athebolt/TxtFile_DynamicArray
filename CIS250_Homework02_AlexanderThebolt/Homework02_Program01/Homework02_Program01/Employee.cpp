#include "Employee.h"
#include "Department.h"

using namespace std;

Employee::Employee()
{
    age = 0;
}

string Employee::getSsn() const
{
    return ssn;
}
string Employee::getFName() const
{
    return fName;
}
string Employee::getLName() const
{
    return lName;
}
string Employee::getMInitial() const
{
    return mInitial;
}
string Employee::getCity() const
{
    return city;
}
string Employee::getState() const
{
    return state;
}
int Employee::getAge() const
{
    return age;
}
string Employee::getGender() const
{
    return gender;
}
int Employee::getDeptId() const
{
    return dept.getId();
}
string Employee::getDeptName() const
{
    return dept.getDName();
}
string Employee::getDeptLetter() const
{
    return dept.getBuildingLetter();
}
int Employee::getDeptFloor() const
{
    return dept.getBuildingFloor();
}
string Employee::getDeptPhone() const
{
    return dept.getDepartmentPhone();
}

void Employee::setSsn(string n)
{
    ssn = n;
}
void Employee::setFName(string f)
{
    fName = f;
}
void Employee::setLName(string l)
{
    lName = l;
}
void Employee::setMInitial(string m)
{
    mInitial = m;
}
void Employee::setCity(string c)
{
    city = c;
}
void Employee::setState(string s)
{
    state = s;
}
void Employee::setAge(int a)
{
    age = a;
}
void Employee::setGender(string g)
{
    gender = g;
}
void Employee::setDeptId(int i)
{
    dept.setId(i);
}
void Employee::setDeptName(string n)
{
    dept.setDName(n);
}
void Employee::setDeptLetter(string l)
{
    dept.setBuildingLetter(l);
}
void Employee::setDeptFloor(int f)
{
    dept.setBuildingFloor(f);
}
void Employee::setDeptPhone(string p)
{
    dept.setDepartmentPhone(p);
}