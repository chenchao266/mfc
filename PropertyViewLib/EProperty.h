/* Generated by Together */

#ifndef EPROPERTY_H
#define EPROPERTY_H

class EPropWnd;
class IPropertyHost;

class EProperty
{

public:

	//
	// construction/destruction
	//
	EProperty( IPropertyHost* pHost , const CString& sName , void* pProperty , bool bEnabled=true );
	virtual ~EProperty();

	bool             IsSelected();

	virtual bool     OnCommand( EPropWnd* pParent , WPARAM wParam , LPARAM lParam );	//override to receive messages from controls
	virtual CString  GetName();															//the name of this property, in the "key" column
	virtual int      GetPreferedWidth( CDC* pDC );
	virtual int      GetHeight( CDC* pDC );											//override to return a special height of the property
	virtual int      GetHeight();													//override to return a special height of the property
    virtual void     Draw( CDC* pDC ,  EPropWnd* pView );							//override to draw yourself, call edfault implementation to clear property background
	virtual void     OnPropActivate( EPropWnd* pParent );						//override to handle property selection (activation..)
	virtual bool     OnPropApply();													//override to apply changes from user, return true if anything changed
    virtual void     OnPropClose();													//override to close (deactivate)
	virtual bool     OnLButtonDown( EPropWnd* pParent , CPoint p );				//override to handle mouse clicks within property
	virtual bool     IsEnabled();
	virtual bool     IsSelectable();											//if this property is selectable, ie can be set "current"
	virtual COLORREF GetColorKey( EPropWnd* pCtrl );
	virtual bool     GetSortValueDouble( double& dValue );	//returns true if this property has a scalarvalue. if not, string sorting will be used
	virtual CString  GetSortValueString();					//this is used for sorting against other properties
	virtual bool     GreaterThan( EProperty* pProperty );
	virtual bool     OnSpaceKey();							//return true if property changed
	virtual EProperty* SetComment( const CString& sComment );
	virtual CString    GetComment();

//	virtual bool     HasChildren();
//	virtual bool     IsOpen();
//	virtual void     SetNodeOpenRect( const CRect& r );
//	virtual CRect*   GetNodeOpenRect();
//	virtual void     ToggleNodeOpen();

protected:

	CString        m_sName;

	bool           m_bEnabled;
	bool           m_bSelected;

public:

    IPropertyHost* m_pHost;
	IPropertyHost* m_pParentHost;	//additionally, call PropertyChanging on the parent. has nothing to do with indent - only if a propertyhost is added to the proplist list PropList.AddPropHost( this , &m_Host );
	CRect          m_Rect;			//rect of the property i nscroll page coordinates
	void*          m_pProperty;

	int   m_nIndent;
	bool  m_bNodeOpen;
	bool  m_bHasChildren;
	CRect m_NodeOpenRect;

	CString m_sComment;
};

#endif //EPROPERTY_H