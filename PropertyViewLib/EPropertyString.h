/* Generated by Together */

#ifndef EPROPERTYSTRING_H
#define EPROPERTYSTRING_H

#include "EIconTextButtonProperty.h"

class IPropertyHost;

class EPropertyString : public EIconTextButtonProperty
{

public:

	//
	// construction/destruction
	//
    EPropertyString( IPropertyHost* pHost , const CString& sName , CString* pProperty , bool bEnabled = true );
	~EPropertyString();

	//
	// EIconTextButtonProperty
	//
	virtual CString GetTextValue();
	virtual bool OnPropApply();

	//
	// this
	//
	virtual bool HasEdit();


};

class EPropertyCharString : public EIconTextButtonProperty
{
	int m_nStringLength;

public:

//	EPropertyCharString( IPropertyHost* pHost , const CString& sName , char* pProperty , int nLength=0 , bool bEnabled=false ) : EIconTextButtonProperty( pHost , sName , pProperty , bEnabled )
	EPropertyCharString( IPropertyHost* pHost , const CString& sName , char* pProperty , int nLength=0 ) : EIconTextButtonProperty( pHost , sName , pProperty , false )
	{
		m_nStringLength = nLength;
	}

	virtual CString GetTextValue()
	{
		const char* s = (const char*)m_pProperty;

		CString rr;

		if( m_nStringLength>0 )
		{
			CString ss(s,m_nStringLength);
			rr = ss;
		}
		else
		{
			CString ss(s);
			rr = ss;
		}

		return rr;
	}
};

#endif //EPROPERTYSTRING_H