#if !defined(AFX_AUTOTOOLBAR_H__3B5BA324_3B72_11D2_AC82_006008A8274D__INCLUDED_)
#define AFX_AUTOTOOLBAR_H__3B5BA324_3B72_11D2_AC82_006008A8274D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AutoToolbar.h : header file
//



/////////////////////////////////////////////////////////////////////////////
// CAutoToolbar command target

class CAutoToolbar : public CCmdTarget
{
	DECLARE_DYNCREATE(CAutoToolbar)

	CAutoToolbar();           // protected constructor used by dynamic creation

// Attributes
public:
	virtual ~CAutoToolbar();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoToolbar)
	public:
	virtual void OnFinalRelease();
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CAutoToolbar)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CAutoToolbar)
	afx_msg BOOL GetVisible();
	afx_msg void SetVisible(BOOL bNewValue);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AUTOTOOLBAR_H__3B5BA324_3B72_11D2_AC82_006008A8274D__INCLUDED_)
