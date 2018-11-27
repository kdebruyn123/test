#pragma once

#include <string>

class Person
{
public:
	Person(std::string in_name, std::string in_surname, int in_age);
	~Person();
	static int age;
	void PrintPerson();

private:
	std::string name;
	std::string surname;
	
};

