#include "stdafx.h"
#include "Student.h"
#include <cstring>
#include <iostream>

using namespace std;
Student::Student(char* inName, char* inDeg, float inGpa, int inRating)
{
    int size = strlen(inName) + 1;
    name = new char[size];
    strcpy_s(name, size, inName);

    size = strlen(inDeg) + 1;
    degree = new char[size];
    strcpy_s(degree, size, inDeg);

    gpa = inGpa;
    rating = inRating;
}
void Student::DisplayRecord()
{
    cout << "\nName: " << name << "\nDegree: " << degree << "\nGpa: " << gpa << "\nRating: " << rating << "\n";
}

Student::Student(Student& input)
{
    rating = input.rating;
    gpa = input.rating;

    int size = strlen(input.name) + 1;
    name = new char[size];
    strcpy_s(name, size, input.name);
    size = strlen(input.degree) + 1;
    degree = new char[size];
    strcpy_s(degree, size, input.degree);
}

Student& Student::operator=(Student& input)
{
    if (this != &input)
    {
        rating = input.rating;
        gpa = input.rating;

        delete[] name;
        int size = strlen(input.name);
        name = new char[size];
        strcpy_s(name, size, input.name);

        delete[] degree;
        size = strlen(input.degree);
        degree = new char[size];
        strcpy_s(degree, size, input.degree);
    }

    return *this;
}