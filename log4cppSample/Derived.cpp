#include "stdafx.h"
#include "Derived.h"


Derived::Derived()
{
}


Derived::~Derived()
{
}

void Derived::printLog()
{
	log4cpp::Category& logger = Log::getLogger();

	logger.info("This is Derived");
}
