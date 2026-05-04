#include "pch.h"
#include "Leave.h"
#include <iostream>
#include <string>

namespace LeaveNamespace
{
	void Leaver::leave()
	{
		std::cout << "Enter a name: ";
		std::string name;
		std::cin >> name;
		std::cout << "Goodbye, " << name << "!" << std::endl;
	};
}