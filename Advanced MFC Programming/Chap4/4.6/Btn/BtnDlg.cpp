#include "stdafx.h"
#include "Btn.h"
#include "BtnDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	//}}AFX_VIRTUAL

protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

CBtnDlg::CBtnDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBtnDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBtnDlg)
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_bBmpCheck=FALSE;
	m_uBmpRadio=0;
}

void CBtnDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBtnDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CBtnDlg, CDialog)
	//{{AFX_MSG_MAP(CBtnDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHECK, OnCheck)
	ON_BN_CLICKED(IDC_RADIO_A, OnRadioA)
	ON_BN_CLICKED(IDC_RADIO_B, OnRadioB)
	ON_BN_CLICKED(IDC_BMP_CHECK, OnBmpCheck)
	ON_BN_CLICKED(IDC_BMP_RADIO_A, OnBmpRadioA)
	ON_BN_CLICKED(IDC_BMP_RADIO_B, OnBmpRadioB)
	//}}AFX_MSG_MAP
	ON_MESSAGE(WM_BTNPOS, OnBtnPos)
END_MESSAGE_MAP()

BOOL CBtnDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	CRect rect;
	int x, y;

	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	CString strAboutMenu;
	strAboutMenu.LoadString(IDS_ABOUTBOX);
	if (!strAboutMenu.IsEmpty())
	{
		pSysMenu->AppendMenu(MF_SEPARATOR);
		pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
	}

	SetIcon(m_hIcon, TRUE);
	SetIcon(m_hIcon, FALSE);
	
	m_btnPlay.AutoLoad(IDC_PLAY, this);
	m_btnPlayPos.AutoLoad(IDC_PLAY_POS, this);
	m_btnPlayPos.GetClientRect(rect);
	x=rect.Width()/2;
	y=rect.Height()/2;
	m_rectBtnPos[0]=CRect(x-2, rect.top, x+2, y);
	m_rectBtnPos[1]=CRect(rect.left, y-2, x, y+2);
	m_rectBtnPos[2]=CRect(x-2, y, x+2, rect.bottom);
	m_rectBtnPos[3]=CRect(x, y-2, rect.right, y+2);
	m_bmpCheck.LoadBitmap(IDB_BITMAP_CHECK);
	m_bmpUnCheck.LoadBitmap(IDB_BITMAP_UNCHECK);
	((CButton *)GetDlgItem(IDC_CHECK))->SetBitmap
	(
		(HBITMAP)m_bmpUnCheck.GetSafeHandle()
	);
	((CButton *)GetDlgItem(IDC_RADIO_A))->SetBitmap
	(
		(HBITMAP)m_bmpUnCheck.GetSafeHandle()
	);
	((CButton *)GetDlgItem(IDC_RADIO_B))->SetBitmap
	(
		(HBITMAP)m_bmpUnCheck.GetSafeHandle()
	);

	m_btnCheck.SubclassDlgItem(IDC_BMP_CHECK, this);
	m_btnCheck.LoadBitmaps(IDB_BITMAP_BTNUNCHECK);
	m_btnCheck.SizeToContent();
	m_btnRadioA.SubclassDlgItem(IDC_BMP_RADIO_A, this);
	m_btnRadioA.LoadBitmaps(IDB_BITMAP_BTNUNCHECK);
	m_btnRadioA.SizeToContent();
	m_btnRadioB.SubclassDlgItem(IDC_BMP_RADIO_B, this);
	m_btnRadioB.LoadBitmaps(IDB_BITMAP_BTNUNCHECK);
	m_btnRadioB.SizeToContent();
	
	return TRUE;
}

void CBtnDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

void CBtnDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this);

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CBtnDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CBtnDlg::OnCheck() 
{
	SetCheckBitmap(IDC_CHECK);
}

void CBtnDlg::OnRadioA() 
{
	SetCheckBitmap(IDC_RADIO_A);
	SetCheckBitmap(IDC_RADIO_B);
}

void CBtnDlg::OnRadioB() 
{
	SetCheckBitmap(IDC_RADIO_B);
	SetCheckBitmap(IDC_RADIO_A);
}

void CBtnDlg::SetCheckBitmap(UINT nID)
{
	BOOL bCheck;

	bCheck=((CButton *)GetDlgItem(nID))->GetCheck();
	((CButton *)GetDlgItem(nID))->SetBitmap
	(
		bCheck ? (HBITMAP)m_bmpCheck.GetSafeHandle():
				 (HBITMAP)m_bmpUnCheck.GetSafeHandle()
	);
	Invalidate(FALSE);
}

void CBtnDlg::OnBmpCheck() 
{
	m_bBmpCheck=m_bBmpCheck ? FALSE:TRUE;
	m_btnCheck.LoadBitmaps
	(
		m_bBmpCheck ? 
		IDB_BITMAP_BTNCHECK:IDB_BITMAP_BTNUNCHECK
	);
	Invalidate(FALSE);
}

void CBtnDlg::OnBmpRadioA() 
{
	m_uBmpRadio=IDC_BMP_RADIO_A;
	SetRadioBitmap();
}

void CBtnDlg::OnBmpRadioB() 
{
	m_uBmpRadio=IDC_BMP_RADIO_B;
	SetRadioBitmap();
}

void CBtnDlg::SetRadioBitmap()
{
	m_btnRadioA.LoadBitmaps
	(
		(m_uBmpRadio == IDC_BMP_RADIO_A) ? 
		IDB_BITMAP_BTNCHECK:IDB_BITMAP_BTNUNCHECK
	);
	m_btnRadioB.LoadBitmaps
	(
		(m_uBmpRadio == IDC_BMP_RADIO_B) ? 
		IDB_BITMAP_BTNCHECK:IDB_BITMAP_BTNUNCHECK
	);
	Invalidate(FALSE);
}

LONG CBtnDlg::OnBtnPos(UINT wParam, LONG lParam)
{
	CPoint pt;

	if(wParam == IDC_PLAY_POS)
	{
		pt.x=LOWORD(lParam);
		pt.y=HIWORD(lParam);
		if(m_rectBtnPos[0].PtInRect(pt))AfxMessageBox("Hit upward arraow");
		if(m_rectBtnPos[1].PtInRect(pt))AfxMessageBox("Hit leftward arraow");
		if(m_rectBtnPos[2].PtInRect(pt))AfxMessageBox("Hit downward arraow");
		if(m_rectBtnPos[3].PtInRect(pt))AfxMessageBox("Hit rightward arraow");
	}
	return (LONG)TRUE;
}