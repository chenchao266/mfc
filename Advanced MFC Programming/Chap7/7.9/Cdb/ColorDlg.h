#if !defined(AFX_COLORDLG_H__0F915D43_0FE4_11D1_9C9A_444553540000__INCLUDED_)
#define AFX_COLORDLG_H__0F915D43_0FE4_11D1_9C9A_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif

class MCMLColorDlg : public CColorDialog
{
	DECLARE_DYNAMIC(MCMLColorDlg)

public:
	MCMLColorDlg(COLORREF clrInit = 0, DWORD dwFlags = 0,
			CWnd* pParentWnd = NULL);

protected:
	//{{AFX_MSG(MCMLColorDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
//{{AFX_INSERT_LOCATION}}
#endif // !defined(AFX_COLORDLG_H__0F915D43_0FE4_11D1_9C9A_444553540000__INCLUDED_)
