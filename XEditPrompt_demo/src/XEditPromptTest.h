// XEditPromptTest.h : main header file for the XEditPromptTest application
//

#ifndef XEDITPROMPTTEST_H
#define XEDITPROMPTTEST_H

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CXEditPromptTestApp:
// See XEditPromptTest.cpp for the implementation of this class
//

class CXEditPromptTestApp : public CWinApp
{
public:
	CXEditPromptTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXEditPromptTestApp)
public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CXEditPromptTestApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif //XEDITPROMPTTEST_H
