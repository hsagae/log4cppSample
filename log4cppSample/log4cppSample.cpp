// log4cppSample.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

#include "Log.h"
#include "Base.h"
#include "Derived.h"

int _tmain(int argc, _TCHAR* argv[])
{
	log4cpp::Category& logger = Log::getLogger();

	logger.warn("Storm is coming");

	Base* pBase = new Base();
	Base* pDerived = new Derived();

	pBase->printLog();
	pDerived->printLog();


	logger.shutdown();

	delete pDerived;
	delete pBase;

	return 0;
}

