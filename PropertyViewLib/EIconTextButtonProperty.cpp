/* Generated by Together */

#include "stdafx.h"
#include "EPropListCtrl.h"
#include "EPropWndEdit.h"
#include "EIconTextButtonProperty.h"

int EIconTextButtonProperty::s_nMargin = 4;

EIconTextButtonProperty::EIconTextButtonProperty( IPropertyHost* pHost , const CString& sName , void* pProperty , bool bEnabled ) : EProperty( pHost , sName , pProperty , bEnabled )
{
	m_pEdit     = NULL;
	m_pButton   = NULL;

//	s_nMargin      = 4;
	m_nButtonWidth = 20;
	m_nTextAlignment = 0;

}

EIconTextButtonProperty::~EIconTextButtonProperty()
{
//	TRACE("Destroying EIconTextButtonProperty!\n");
	OnPropClose();
}

CString EIconTextButtonProperty::GetTextValue()
{
	return "Please override GetTextValue() in your EIconTextButtonProperty class";
}

CString EIconTextButtonProperty::GetSortValueString()
{
	return GetTextValue();
}

void EIconTextButtonProperty::DrawIcon( CDC* pDC  , EPropWnd* pParent , const CRect& Rect )
{
	CRect r = Rect;
	pDC->SelectStockObject( BLACK_PEN );
	pDC->SelectStockObject( WHITE_BRUSH );
	pDC->Rectangle(r);
}

bool EIconTextButtonProperty::HasEdit()
{
	return false;
}

bool EIconTextButtonProperty::HasButton()
{
	return false;
}

int EIconTextButtonProperty::GetIconWidth()
{
	return 0;
}

int EIconTextButtonProperty::GetHeight( CDC* pDC )
{
	CRect TextRect(0,0,0,0);

	CString s = GetTextValue();

	if( s.GetLength()==0 )
	{
		s = "Q";	//this is some default text to ensure there is actually height...
	}

	pDC->DrawText( s , &TextRect , DT_CALCRECT );

	int w = TextRect.Width();
	int h = TextRect.Height();

	return 3 + h + 3;

//  return 19;
}

int EIconTextButtonProperty::GetPreferedWidth( CDC* pDC )
{
	int nWidth = 0;

	if( GetIconWidth() > 0 )
	{
		nWidth += s_nMargin;
		nWidth += GetIconWidth();
	}

	nWidth += s_nMargin;
	CString s = GetTextValue();
	CSize ext = pDC->GetTextExtent(s);
	nWidth += ext.cx;	//s.GetLength() * 10;		//inaccurate
	nWidth += s_nMargin;						//a little extra... was removed

	if( HasButton() )
	{
		nWidth += m_nButtonWidth;
		nWidth += s_nMargin;
	}

	return nWidth;
}

void EIconTextButtonProperty::Draw( CDC* pDC , EPropWnd* pParent )
{
//	m_Rect = r;
	m_nIconWidth   = GetIconWidth();

	//
	// 0   1      2   3                          4   5        6
	// +---+------+---+--------------------------+---+--------+
	// |   |      |   |                          |   |        |
	// |   | ICON |   | TEXT                     |   | BUTTON |
	// |   |      |   |                          |   |        |
	// +---+------+---+--------------------------+---+--------+
	//
	//

	int x0 = m_Rect.left;		//panel begin
	int x1 = x0 + s_nMargin;	//icon begin
	int x2 = x1;				//icon end (default for no icon)
	int x3 = x1;				//text begin (default for no icon)

	if( m_nIconWidth != 0 )		//if there's an icon..
	{
		x2 = x1 + m_nIconWidth;	//icon end
		x3 = x2 + s_nMargin;	//text begin
	}

	int x5 = m_Rect.right;		//button begin
	int x6 = m_Rect.right;		//button end

	if( HasButton() && m_bSelected )
	{
		CRect cr;
		pParent->GetClientRect(&cr);

		x6 = cr.right /*+ pCtrl->GetScrollPos(SB_HORZ)*/ ;

		if( x6 > m_Rect.right )
		{
			x6 = m_Rect.right;
		}

		x5 = x6 - m_nButtonWidth;
	}

	int x4 = x5 - s_nMargin;

	//
	//
	//

	int nFontHeight = pParent->GetFontHeight();
	int nPropHeight = m_Rect.Height();

//	int  = m_Rect.top;
//	int y1 = y0 + 3;				//(nPropHeight - nFontHeight)/2;
//	int y2 = y0 + nPropHeight - 3;
//	int y3 = y0 + nPropHeight;

	//
	//
	//

	m_IconRect.SetRect( x1 , m_Rect.top + 3 , x2 , m_Rect.top + 3 + m_nIconWidth );		//icon is square in upperleft corner
	m_TextRect.SetRect( x3 , m_Rect.top + 3 , x4 , m_Rect.top + nPropHeight - 3  );
	m_ButtRect.SetRect( x5 , m_Rect.top     , x6 , m_Rect.top + nPropHeight      );

	//
	// background
	//

	if( IsEnabled() )
	{
		if( m_bSelected )
		{
			pDC->FillSolidRect( &m_Rect , pParent->GetColorPaneValActive() );
		}
		else
		{
			pDC->FillSolidRect( &m_Rect , pParent->GetColorPaneVal() );
		}
	}
	else
	{
		pDC->FillSolidRect( &m_Rect , pParent->GetColorPaneKey() );
	}

	//
	// icon
	//

	if( GetIconWidth() > 0 )
	{
		DrawIcon( pDC , pParent, m_IconRect );
	}

	//
	// text
	//

	CPoint vpo = pDC->GetViewportOrg();
//	vpo.x = 0;//not set ..!!
//	vpo.y = 0;

	if( HasEdit() && m_bSelected && IsEnabled() )
	{
		ASSERT(m_pEdit!=NULL);
 		m_pEdit->SetWindowPos( NULL , x3 + vpo.x , m_TextRect.top + vpo.y , m_TextRect.Width()+1 , m_TextRect.Height() , SWP_NOZORDER );
		m_pEdit->SetWindowText( GetTextValue() );
		m_pEdit->SetSel(0,-1);
	}
	else
	{
		ASSERT(m_pEdit==NULL);

		if( IsEnabled()==false )
		{
			pDC->SetTextColor( pParent->GetColorPaneKeyActive() - 0x404040 );
		}

		CRect tr = m_TextRect;
		
		if( tr.Width() > 0 )
		{
			CString s1 = GetTextValue();

			if( s1.GetLength() > 0 )
			{
				CString s2 = EPropWnd::s_FitStringToWidth(s1,tr.Width(),pDC);

				UINT nFormat = DT_TOP | DT_NOCLIP;

				if( m_nTextAlignment == 1 ) { nFormat |= DT_CENTER;                }
				if( m_nTextAlignment == 2 ) { nFormat |= DT_RIGHT;  /*tr.right-=1;*/ }

				if( s1.GetLength()>s2.GetLength() )
				{
					nFormat &= ~DT_RIGHT;	//clear right flag!!
				}

				pDC->DrawText( s2 , tr , nFormat );
			}
		}

		if( IsEnabled()==false )
		{
			pDC->SetTextColor( 0x000000 );
		}
	}

	//
	// button
	//
	if( HasButton() && m_bSelected && IsEnabled() && m_pButton != NULL )
	{
		int w = m_ButtRect.Width();
		int h = m_ButtRect.Height();
		int x = m_ButtRect.left;
		int y = m_ButtRect.top;
		m_pButton->SetWindowPos( NULL , x  + vpo.x , y + vpo.y , w , h , SWP_NOZORDER );
	}

	if( m_bSelected == false )
	{
		ASSERT( m_pButton == NULL );
		ASSERT( m_pEdit   == NULL );
	}
}

void EIconTextButtonProperty::OnPropActivate( EPropWnd* pParent )
{
	ASSERT( m_bSelected == false );
	ASSERT( m_pButton == NULL );
	ASSERT( m_pEdit == NULL );

	m_sInitialValueText = GetTextValue();

	int nBeg;
	int nEnd;
	pParent->GetIDRange( nBeg , nEnd );

	if( HasEdit() && IsEnabled() )
	{
		m_pEdit = new EPropWndEdit();

		DWORD nStyle = WS_CHILD | WS_VISIBLE | WS_TABSTOP | ES_AUTOHSCROLL;

		if( m_nTextAlignment==1 ) nStyle |= ES_CENTER;
		if( m_nTextAlignment==2 ) nStyle |= ES_RIGHT;

		m_pEdit->Create( nStyle , m_TextRect , pParent , nBeg + 0 );
		m_pEdit->SetFont( pParent->GetFont() , TRUE );
		m_pEdit->SetWindowText( m_sInitialValueText );
		m_pEdit->SetMargins( 0 , 0 );
		m_pEdit->SetFocus();
	}

	if( HasButton() && IsEnabled() )
	{
		m_pButton = new CButton();
		m_pButton->Create( "..." , WS_CHILD | WS_VISIBLE , m_ButtRect , pParent , nBeg + 1 );
//		m_pButton->ModifyStyleEx( 0 , WS_EX_CLIENTEDGE );
		m_pButton->SetFont( pParent->GetFont() );
		
		if( m_pEdit == NULL )
		{
			m_pButton->SetFocus();
		}
	}

	m_bSelected = true;

}

void EIconTextButtonProperty::OnPropClose()
{
//	TRACE( "EIconTextButtonProperty::OnPropClose(): %s\n" , GetName() );

	if( m_pEdit != NULL )
	{
		m_pEdit->DestroyWindow();
		delete m_pEdit;
		m_pEdit = NULL;
	}

	if( m_pButton != NULL )
	{
		m_pButton->DestroyWindow();
		delete m_pButton;
		m_pButton = NULL;
	}

	m_bSelected = false;
}

char EIconTextButtonProperty::GetThousandSeparator()
{
	char cThousand = ',';

	CString s;
	s.Format("%.1lf",1.1);

	if( s[1]==',' )
	{
		cThousand = '.';
	}

	return cThousand;
}

CString EIconTextButtonProperty::FormatThousands( const CString& sSource )
{
	char ss[1024];
	char* ps = &ss[512];

	ps--;
	*ps = 0;

	CString t;
	t.Format("%.1lf",1.2);

	char cDecimal  = '.';
	char cThousand = ',';

	if( t[1] == ',' )	//dansk?
	{
		cThousand = '.';
		cDecimal  = ',';
	}

	bool befterkomma = (sSource.Find(cDecimal) == -1);

	int is = sSource.GetLength() - 1;

	int  efterkommacount = 0;

	while( is >= 0 )
	{
		char c = sSource[is--];

		if( '0'<=c && c<='9' )
		{
			if( befterkomma )
			{
				if( efterkommacount>0 )
				{
					if( efterkommacount%3==0 )
					{
						ps--;
						*ps = cThousand;
					}
				}

				efterkommacount++;
			}
		}
		else
		{
			if( c==cDecimal )
			{
				befterkomma = true;
			}
		}

		--ps;
		*ps = c;
	}

	CString sDestin = ps;

	return sDestin;
}

EIconTextButtonProperty* EIconTextButtonProperty::SetTextAlign( int nAlignment )
{
	m_nTextAlignment = nAlignment;
	return this;
	
}
