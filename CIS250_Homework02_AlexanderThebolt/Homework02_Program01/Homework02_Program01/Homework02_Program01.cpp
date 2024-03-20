//===============================================================================
//Name: Alexander Thebolt
//Date: 02-22-2023
//Desc: Program 1 - Employee Information V2 - Reading a Text File and storing it
//in a dynamic array then displaying a menu with 6 options that display different
//things about the information in the file.
//===============================================================================

#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "fstream"
#include "vector"

using namespace std;

int getTextFileSize();

void readTextFile(Employee[], int);

int displayMenu();

void menuOptions(int, Employee[], int fileSize);

void option1(Employee[], int);

void option2(Employee[], int);

void option3(Employee[], int);

void option4(Employee[], int);

void option5(Employee[], int);

void option6(Employee[], int);

int main()
{
    int menuChoice;

    //counts every line in the text file
    int fileSize = getTextFileSize();

    Employee* employees = new Employee[fileSize];

    //reads and stores each line in the text file
    readTextFile(employees, fileSize);

    //shows user menu options
    menuChoice = displayMenu();
    
    //houses map of menu options
    menuOptions(menuChoice, employees, fileSize);
}

int getTextFileSize()
{
    ifstream inputFile;
    string fileName = "EmployeeList.txt";
    string lineOfText;
    int i = 0;

    inputFile.open(fileName);

    if (inputFile)
    {
        //cout << "file is opened" << endl;
        while (getline(inputFile, lineOfText))
        {
            i++;
        }
    }
    else
    {
        cout << "file is not opened" << endl;
    }

    inputFile.close();

    return i;
}

void readTextFile(Employee employees[], int size)
{
    ifstream inputFile;
    string fileName = "EmployeeList.txt";
    string lineOfText;
    char delim = ',';
    int commaPos;
    int i = 0;

    inputFile.open(fileName);

    if (inputFile)
    {
        //cout << "file opened" << endl;

        while (getline(inputFile, lineOfText))
        {
            commaPos = lineOfText.find(delim);
            employees[i].setSsn(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setFName(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setLName(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setMInitial(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setCity(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setState(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setAge(stoi(lineOfText.substr(0, commaPos)));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setGender(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setDeptId(stoi(lineOfText.substr(0, commaPos)));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setDeptName(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setDeptLetter(lineOfText.substr(0, commaPos));
            lineOfText = lineOfText.substr(commaPos + 1);

            commaPos = lineOfText.find(delim);
            employees[i].setDeptFloor(stoi(lineOfText.substr(0, commaPos)));
            lineOfText = lineOfText.substr(commaPos + 1);

            employees[i].setDeptPhone(lineOfText);

            i++;
        }        
    }
    else
    {
        //cout << "File not opened" << endl;
    }

    inputFile.close();
}

int displayMenu()
{
    int menuChoice;

    cout << "           EMPLOYEE INFORMATION WHATEVER COMPANY INC." << endl;
    cout << "===========================================================================" << endl;
    cout << "   1. Display all employees" << endl;
    cout << "   2. Display name of oldest employee" << endl;
    cout << "   3. Display the building letter and floor for Computer Science department" << endl;
    cout << "   4. Display department names who are in building A" << endl;
    cout << "   5. Find an employee and list their information" << endl;
    cout << "   6. Average age of employees who live in michigan" << endl;
    cout << "   0. Return to menu" << endl;
    cout << "-999. Exit the program" << endl;
    cout << "Enter your selection (0 for menu -999 to exit): ";
    cin >> menuChoice;

    return menuChoice;
}

void menuOptions(int menuChoice, Employee employees[], int fileSize)
{
    while ((menuChoice < 0 || menuChoice > 6) && menuChoice != -999)
    {
        cout << "Enter your selection (0 for menu -999 to exit): ";
        cin >> menuChoice;
    }

    system("cls");

    if (menuChoice == 0)
    {
        menuChoice = displayMenu();

        menuOptions(menuChoice, employees, fileSize);
    }
    else if (menuChoice == 1)
    {
        option1(employees, fileSize);

        menuChoice = -1;

        menuOptions(menuChoice, employees, fileSize);
    }
    else if (menuChoice == 2)
    {
        option2(employees, fileSize);

        menuChoice = -1;

        menuOptions(menuChoice, employees, fileSize);
    }
    else if (menuChoice == 3)
    {
        option3(employees, fileSize);

        menuChoice = -1;

        menuOptions(menuChoice, employees, fileSize);
    }
    else if (menuChoice == 4)
    {
        option4(employees, fileSize);

        menuChoice = -1;

        menuOptions(menuChoice, employees, fileSize);
    }
    else if (menuChoice == 5)
    {
        option5(employees, fileSize);

        menuChoice = -1;

        menuOptions(menuChoice, employees, fileSize);
    }
    else if (menuChoice == 6)
    {
        option6(employees, fileSize);

        menuChoice = -1;

        menuOptions(menuChoice, employees, fileSize);
    }
    else
    {
        cout << "Bye." << endl;
    }
}

void option1(Employee employees[], int fileSize)
{
    for (int i = 0; i < fileSize; i++)
    {
        cout << "EMPLOYEE";

        if (i < 10)
        {
            cout << "0";
        }

        cout << i << endl;
        cout << "==========" << endl;
        cout << "SSN            : " << employees[i].getSsn() << endl;
        cout << "First Name     : " << employees[i].getFName() << endl;
        cout << "Last Name      : " << employees[i].getLName() << endl;
        cout << "Middle Initial : " << employees[i].getMInitial() << endl;
        cout << "City           : " << employees[i].getCity() << endl;
        cout << "State          : " << employees[i].getState() << endl;
        cout << "Age            : " << employees[i].getAge() << endl;
        cout << "Gender         : " << employees[i].getGender() << endl;
        cout << "Depart ID      : " << employees[i].getDeptId() << endl;
        cout << "Depart Name    : " << employees[i].getDeptName() << endl;
        cout << "Building Letter: " << employees[i].getDeptLetter() << endl;
        cout << "Building Floor : " << employees[i].getDeptFloor() << endl;
        cout << "Phone Number   : " << employees[i].getDeptPhone() << endl << endl << endl;
    }
}

void option2(Employee employees[], int fileSize)
{
    int age = 0;
    int oldest = 0;

    for (int i = 0; i < fileSize; i++)
    {
        if (employees[i].getAge() > age)
        {
            age = employees[i].getAge();

            oldest = i;
        }
    }

    cout << "Oldest Employee Name" << endl;
    cout << "====================" << endl;
    cout << employees[oldest].getLName() << ", " << employees[oldest].getFName() << " " << employees[oldest].getMInitial() << "." << endl;
    cout << "Age: " << age << endl;
}

void option3(Employee employees[], int fileSize)
{
    string buildingLetter;
    int buildingFloor = 0;

    for (int i = 0; i < fileSize; i++)
    {
        if (employees[i].getDeptName() == "Computer Science")
        {
            buildingLetter = employees[i].getDeptLetter();

            buildingFloor = employees[i].getDeptFloor();
        }
    }

    cout << "Computer Science Location" << endl;
    cout << "=========================" << endl;
    cout << "Building: " << buildingLetter << "  Floor: " << buildingFloor << endl;
}

void option4(Employee employees[], int fileSize)
{
    vector<string> depts;

    cout << "Building A Departments" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < fileSize; i++)
    {
        if (employees[i].getDeptLetter() == "A")
        {
            if (depts.empty())
            {
                depts.push_back(employees[i].getDeptName());
            }
            else
            {
                bool deptExists = false;

                for (int ii = 0; ii < depts.size(); ii++)
                {
                    if (depts.at(ii) == employees[i].getDeptName())
                    {
                        deptExists = true;
                    }
                }

                if (!deptExists)
                {
                    depts.push_back(employees[i].getDeptName());
                }
            }
        }
    }

    for (int i = 0; i < depts.size(); i++)
    {
        cout << depts.at(i) << endl;
    }
}

void option5(Employee employees[], int fileSize)
{
    string ssn;
    bool found = false;
    int employee = 0;

    cout << "Employee Search" << endl;
    cout << "===============" << endl;
    cout << "Enter the ssn for the employee" << endl;
    cin >> ssn;

    for (int i = 0; i < fileSize; i++)
    {

        if (ssn == employees[i].getSsn())
        {
            found = true;

            employee = i;
        }
    }

    if (found)
    {
        cout << "SSN            : " << employees[employee].getSsn() << endl;
        cout << "First Name     : " << employees[employee].getFName() << endl;
        cout << "Last Name      : " << employees[employee].getLName() << endl;
        cout << "Middle Initial : " << employees[employee].getMInitial() << endl;
        cout << "City           : " << employees[employee].getCity() << endl;
        cout << "State          : " << employees[employee].getState() << endl;
        cout << "Age            : " << employees[employee].getAge() << endl;
        cout << "Gender         : " << employees[employee].getGender() << endl;
        cout << "Depart ID      : " << employees[employee].getDeptId() << endl;
        cout << "Depart Name    : " << employees[employee].getDeptName() << endl;
        cout << "Building Letter: " << employees[employee].getDeptLetter() << endl;
        cout << "Building Floor : " << employees[employee].getDeptFloor() << endl;
        cout << "Phone Number   : " << employees[employee].getDeptPhone() << endl;
    }
    else
    {
        cout << "The employee with the ssn of " << ssn << " does not exist" << endl;
    }
}

void option6(Employee employees[], int fileSize)
{
    int ages = 0;
    int people = 0;
    int avg = 0;

    for (int i = 0; i < fileSize; i++)
    {
        if (employees[i].getState() == "MI")
        {
            ages += employees[i].getAge();

            people++;
        }
    }

    avg = ages / people;

    cout << "Average age for employees who live in MI" << endl;
    cout << "========================================" << endl;
    cout << avg << endl;
}