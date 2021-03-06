///////////////////////////////////////////////////////////////////
// Header File SmartPointersSerialize.h
///////////////////////////////////////////////////////////////////
//
// 309/1/1997 11:28  Author: Poul A. Costinsky  poul@wizsoft.com
// Copyright (C) WizSoft Inc., 1997
///////////////////////////////////////////////////////////////////

#ifndef __CWizSmartPointersSerialize_H
#define __CWizSmartPointersSerialize_H

///////////////////////////////////////////////////////////////////
template<class POINTER_TYPE>
inline void StoreSmartPtr (CArchive& ar, const POINTER_TYPE& Pointer)
{
	ar << Pointer.GetPtr();
}

///////////////////////////////////////////////////////////////////
template<class POINTER_TYPE, class DATA_TYPE>
inline void LoadSmartPtr (CArchive& ar, POINTER_TYPE& Pointer, DATA_TYPE* p)
{
	Pointer = NULL;
	p		= NULL;
	ar >> p;
	Pointer = p;
}
///////////////////////////////////////////////////////////////////

#endif // __CWizSmartPointersSerialize_H


