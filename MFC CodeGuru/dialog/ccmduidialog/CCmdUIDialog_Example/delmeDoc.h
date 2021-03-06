// delmeDoc.h : interface of the CDelmeDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DELMEDOC_H__7D35F4AB_7531_11D1_8FA7_000000000000__INCLUDED_)
#define AFX_DELMEDOC_H__7D35F4AB_7531_11D1_8FA7_000000000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CDelmeDoc : public CDocument
{
protected: // create from serialization only
	CDelmeDoc();
	DECLARE_DYNCREATE(CDelmeDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDelmeDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDelmeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDelmeDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELMEDOC_H__7D35F4AB_7531_11D1_8FA7_000000000000__INCLUDED_)
