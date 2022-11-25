#pragma once
#include "Base.h"
class Student :
	public Base
{
	char* name = nullptr;
	char* degree = nullptr;
	float gpa;
	int rating;

public:
	Student() { name = nullptr; degree = nullptr; gpa = 0; rating = 0; }
	Student(char* inName, char* inDeg, float inGpa, int inRating);
	void DisplayRecord();

	Student(Student& input); 
	Student& operator=(Student& input); 
	~Student() { delete[] name; delete[] degree; } 
};
