#include "stdafx.h"
#include "Ctl.h"
#include "CtlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

BEGIN_MESSAGE_MAP(CCtlApp, CWinApp)
	//{{AFX_MSG_MAP(CCtlApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

CCtlApp::CCtlApp()
{
}

CCtlApp theApp;

BOOL CCtlApp::InitInstance()
{
#ifdef _AFXDLL
	Enable3dControls();	
#else
	Enable3dControlsStatic();
#endif

	CCtlDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	return FALSE;
}
