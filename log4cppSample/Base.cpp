#include "stdafx.h"
#include "Base.h"


Base::Base()
{
}


Base::~Base()
{
}


void Base::printLog()
{
	log4cpp::Category& logger = Log::getLogger();

	logger.info("This is Base");
}
