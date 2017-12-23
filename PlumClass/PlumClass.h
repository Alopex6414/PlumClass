/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2017, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		PlumClass.h
* @brief	This Program is PlumClass DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2017-12-23	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __PLUMCLASS_H_
#define __PLUMCLASS_H_

//Include C/C++ Header File
#include <stdio.h>

//Include PlumClass Header File
#include "PlumBaseClass.h"

//Macro Definition
#ifdef	PLUMCLASS_EXPORTS
#define PLUMCLASS_API	__declspec(dllexport)
#else
#define PLUMCLASS_API	__declspec(dllimport)
#endif

//Class Definition
class PLUMCLASS_API CPlumClass :public CPlumBaseClass
{
private:


public:
	CPlumClass();
	virtual ~CPlumClass();

	virtual void Destroy();
};

//Function Definition
extern "C" PLUMCLASS_API void CreateClassObject(CPlumBaseClass** ppObj);

#endif