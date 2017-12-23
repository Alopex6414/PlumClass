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
// @Purpose: CPlumClass���캯��
// @Since: v1.00a
// @Para: None
// @Return: None
//------------------------------------------------------------------
CPlumClass::CPlumClass()
{
}

//------------------------------------------------------------------
// @Function:	 ~CPlumClass()
// @Purpose: CPlumClass��������
// @Since: v1.00a
// @Para: None
// @Return: None
//------------------------------------------------------------------
CPlumClass::~CPlumClass()
{
}

//------------------------------------------------------------------
// @Function:	 Destroy()
// @Purpose: CPlumClass�����������
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
// @Purpose: �����������
// @Since: v1.00a
// @Para: None
// @Return: None
//------------------------------------------------------------------
void CreateClassObject(CPlumBaseClass** ppObj)
{
	*ppObj = new CPlumClass;
}