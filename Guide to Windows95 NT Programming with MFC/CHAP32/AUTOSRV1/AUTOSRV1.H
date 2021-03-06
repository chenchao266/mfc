///////////////////////////////////////////////////////////////////
// Module  : AUTOSRV1.H
//
// Purpose : Interface for the AUTOSRV1 application.
//
// Author  : Rob McGregor, rob_mcgregor@compuserve.com
//        
// Date    : 07-06-96
///////////////////////////////////////////////////////////////////

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

///////////////////////////////////////////////////////////////////
// CAutoSrv1App application class

class CAutoSrv1App : public CWinApp
{
public:
	virtual BOOL InitInstance();
};

///////////////////////////////////////////////////////////////////
