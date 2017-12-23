/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2017, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		PlumClass.cpp
* @brief	This Program is PlumClass DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2017-12-23	v1.00a	alopex	Create Project.
*/
#include "PlumClass.h"

//------------------------------------------------------------------
// @Function:	 CPlumClass()
// @Purpose: CPlumClass构造函数
// @Since: v1.00a
// @Para: None
// @Return: None
//------------------------------------------------------------------
CPlumClass::CPlumClass()
{
}

//------------------------------------------------------------------
// @Function:	 ~CPlumClass()
// @Purpose: CPlumClass析构函数
// @Since: v1.00a
// @Para: None
// @Return: None
//------------------------------------------------------------------
CPlumClass::~CPlumClass()
{
}

//------------------------------------------------------------------
// @Function:	 Destroy()
// @Purpose: CPlumClass销毁类对象函数
// @Since: v1.00a
// @Para: None
// @Return: None
//------------------------------------------------------------------
void CPlumClass::Destroy()
{
	delete this;
}

//------------------------------------------------------------------
// @Function:	 CreateClassObject()
// @Purpose: 创建类对象函数
// @Since: v1.00a
// @Para: None
// @Return: None
//------------------------------------------------------------------
void CreateClassObject(CPlumBaseClass** ppObj)
{
	*ppObj = new CPlumClass;
}