#ifndef LOGGERHELPERS_H_INCLUDED
#define LOGGERHELPERS_H_INCLUDED
#include "Logger.h"
#include <string.h>
#include <iostream>
using std::string;

class ConsoleLogger : public Logger {
public:
	ConsoleLogger(LogLevel mask) : Logger(mask){}
	virtual void WriteMessage(string msg);

};
class EmailLogger : public Logger {
public:
	EmailLogger(LogLevel mask) : Logger(mask){}
	virtual void WriteMessage(string msg);
};
class FileLogger : public Logger
{
	FileLogger(LogLevel mask) : Logger(mask){}
	virtual void WriteMessage(string msg);
};
#endif