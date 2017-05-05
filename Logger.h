#ifndef LOGGER_H_INCLUDED
#define LOGGER_H_INCLUDED
#include <string>
using std::string;

enum LogLevel
{
	None = 0,                 //        0
	Info = 1,                 //        1
	Debug = 2,                //       10
	Warning = 4,              //      100
	Error = 8,                //     1000
	FunctionalMessage = 16,   //    10000
	FunctionalError = 32,     //   100000
	All = 63                  //   111111
};

class Logger
{
private:
	LogLevel logMask;
	Logger *next;
public:
	Logger(LogLevel mask) {
		this->logMask = mask;
	}
	Logger SetNext(Logger *nextlogger);
	void Message(string msg, LogLevel severity);
	virtual void WriteMessage(string msg);
};


#endif 
