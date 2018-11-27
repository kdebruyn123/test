#include "Person.h"

#include <iostream>

Person::Person(std::string in_name, std::string in_surname, int in_age) 
{
   name = in_name;
   surname = in_surname;
   Person::age = in_age;
}


Person::~Person()
{
}

void Person::PrintPerson()
{
	std::cout << "--------------------------------------------------------------------\n";
	std::cout << "Name: " << name << "\nSurname: " << surname << "\nAge:" << Person::age << "\n";
	std::cout << "--------------------------------------------------------------------\n";
}
