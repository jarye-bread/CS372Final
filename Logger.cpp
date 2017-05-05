#include "Logger.h"

Logger Logger::SetNext(Logger *nextlogger)
{
	next = nextlogger;
	return *nextlogger;
}

void Logger::Message(string msg, LogLevel severity)
{
	if ((severity && logMask) != 0)
	{
		WriteMessage(msg);
	}
	if (next != nullptr)
	{
		next->Message(msg, severity);
	}
}

void Logger::WriteMessage(string msg)
{
}
