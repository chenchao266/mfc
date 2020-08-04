#if !defined(AFX_MAINFRM_H__D3F202D6_FC3A_11D0_9C9A_444553540000__INCLUDED_)
#define AFX_MAINFRM_H__D3F202D6_FC3A_11D0_9C9A_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif

#include "SpWnd.h"

class CMainFrame : public CFrameWnd
{
protected:
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

protected:
	MCSplitterWnd m_wndSp;

public:
	//{{AFX_VIRTUAL(CMainFrame)
	public:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
//{{AFX_INSERT_LOCATION}}
#endif // !defined(AFX_MAINFRM_H__D3F202D6_FC3A_11D0_9C9A_444553540000__INCLUDED_)
