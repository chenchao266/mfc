
// NCSkinDemoDoc.h : interface of the CNCSkinDemoDoc class
//


#pragma once


class CNCSkinDemoDoc : public CDocument
{
protected: // create from serialization only
	CNCSkinDemoDoc();
	DECLARE_DYNCREATE(CNCSkinDemoDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CNCSkinDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


