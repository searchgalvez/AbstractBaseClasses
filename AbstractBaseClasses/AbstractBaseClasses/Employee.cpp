#include "stdafx.h"
#include "Employee.h"
#include <cstring>
#include <iostream>

using namespace std;
Employee::Employee(char* inName, char* inDept, int inSal)
{
    int size = strlen(inName) + 1;
    name = new char[size];
    strcpy_s(name, size, inName);

    size = strlen(inDept) + 1;
    dept = new char[size];
    strcpy_s(dept, size, inDept);
}
void Employee::DisplayRecord()
{
    cout << "\nName: " << name << "\nSalary: " << salary << "\nDepartment: " << dept << "\n";
}

Employee::Employee(Employee& input)
{
    salary = input.salary;

    int size = strlen(input.name) + 1;
    name = new char[size];
    strcpy_s(name, size, input.name);

    size = strlen(input.dept) + 1;
    dept = new char[size];
    strcpy_s(dept, size, input.dept);
}

Employee& Employee::operator=(Employee& input)
{
    if (this != &input)
    {
        salary = input.salary;
        delete[] name;
        int size = strlen(input.name) + 1;
        name = new char[size];
        strcpy_s(name, size, input.name);

        delete[] dept;
        size = strlen(input.dept) + 1;
        dept = new char[size];
        strcpy_s(dept, size, input.dept);
    }
    return *this;

}