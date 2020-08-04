/* Generated by Together */

#include "stdafx.h"
#include "IPropertyHost.h"
#include "EPropWndEdit.h"
#include "EPropertyString.h"

EPropertyString::EPropertyString( IPropertyHost* pHost , const CString& sName , CString* pProperty , bool bEnabled ) : EIconTextButtonProperty( pHost , sName , pProperty , bEnabled )
{
}

EPropertyString::~EPropertyString()
{
}


bool EPropertyString::OnPropApply()
{
	ASSERT( m_bSelected == true );
	ASSERT( m_pEdit     != NULL );
	ASSERT( IsEnabled() == true );

	CString s;
	m_pEdit->GetWindowText(s);

	bool bPropertyChanged = false;

	if( ((CString*)m_pProperty)->Compare(s) != 0 )
	{
		if( m_pHost->PropertyChanging(m_pProperty,&s) )
		{
			*((CString*)m_pProperty) = s;
			bPropertyChanged = true;
		}
	}

	return bPropertyChanged;
}

CString EPropertyString::GetTextValue()
{
	return *((CString*)m_pProperty);
}

bool EPropertyString::HasEdit()
{
	return true;
}