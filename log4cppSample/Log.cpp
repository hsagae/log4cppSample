#include "stdafx.h"
#include "Log.h"


Log::Log()
{
}


Log::~Log()
{
}

log4cpp::Category& Log::getLogger()
{
	std::string initFileName = "log4cpp.properties";
	log4cpp::PropertyConfigurator::configure(initFileName);

	return log4cpp::Category::getRoot();
}