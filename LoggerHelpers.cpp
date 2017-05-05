#include "LoggerHelpers.h"
#include <iostream>
#include <string>
void ConsoleLogger::WriteMessage(string msg)
{
	std::cout << "Writing to console: " << msg << std::endl;
}

void EmailLogger::WriteMessage(string msg)
{
	std::cout << "Sending via email: " << msg << std::endl;
}

void FileLogger::WriteMessage(string msg)
{
	std::cout << "Writing to Log File: " << msg << std::endl;
}
