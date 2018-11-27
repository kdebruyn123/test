#include "stdafx.h"
#include <iostream>

#include "Person.h"

namespace global
{
	static int bla = 8;
}

int main()
{
	Person p("bla", "hello", 12);
	Person p1("bla1", "hello1", 15);
	p.PrintPerson();
	p1.PrintPerson();
    return 0;
}

