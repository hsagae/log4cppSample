#pragma once
#include <log4cpp/Category.hh>
#include <log4cpp/PropertyConfigurator.hh>

class Log
{
private:
	Log();
public:
	~Log();
	static log4cpp::Category& getLogger();
};

