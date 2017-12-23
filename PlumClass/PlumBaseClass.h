/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2017, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		PlumBaseClass.h
* @brief	This Header File For Dynamic Load Library C++ Class
* @author	Alopex/Helium
* @version	v1.00a
* @date		2017-12-23	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __PLUMBASECLASS_H_
#define __PLUMBASECLASS_H_

//Include C/C++ Header File
#include <stdio.h>

//Macro Definition
#ifdef	PLUMCLASS_EXPORTS
#define PLUMCLASS_API	__declspec(dllexport)
#else
#define PLUMCLASS_API	__declspec(dllimport)
#endif

//Class Definition
class PLUMCLASS_API CPlumBaseClass
{
private:


public:
	CPlumBaseClass();
	virtual ~CPlumBaseClass();

	virtual void Destroy() = 0;
};

CPlumBaseClass::CPlumBaseClass()
{
}

CPlumBaseClass::~CPlumBaseClass()
{
}

#endif