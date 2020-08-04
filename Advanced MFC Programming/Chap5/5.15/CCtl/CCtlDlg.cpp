#include "stdafx.h"
#include "CCtl.h"
#include "CCtlDlg.h"

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

CCCtlDlg::CCCtlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCCtlDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCCtlDlg)
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCCtlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCCtlDlg)
	DDX_Control(pDX, IDC_LIST, m_listCtrl);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCCtlDlg, CDialog)
	//{{AFX_MSG_MAP(CCCtlDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_RADIO_ICON, OnRadioIcon)
	ON_BN_CLICKED(IDC_RADIO_LIST, OnRadioList)
	ON_BN_CLICKED(IDC_RADIO_REPORT, OnRadioReport)
	ON_BN_CLICKED(IDC_RADIO_SMALLICON, OnRadioSmallicon)
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BOOL CCCtlDlg::OnInitDialog()
{
	CCCtlApp *ptrApp;
	LV_COLUMN lvCol;
	LV_ITEM lvItem;
	int nItem;
	CRect rect;
	CImageList *pilBig;
	CImageList *pilSmall;

	CDialog::OnInitDialog();

	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	SetIcon(m_hIcon, TRUE);
	SetIcon(m_hIcon, FALSE);
	
	ptrApp=(CCCtlApp *)AfxGetApp();
	pilBig=new CImageList();
	pilSmall=new CImageList();

	pilBig->Create(32, 32, ILC_MASK, 4 ,0);
	pilSmall->Create(16, 16, ILC_MASK, 4 ,0);
	
	pilBig->Add(ptrApp->LoadIcon(IDI_ICON_SQUARE));
	pilBig->Add(ptrApp->LoadIcon(IDI_ICON_RECTANGLE));
	pilBig->Add(ptrApp->LoadIcon(IDI_ICON_CIRCLE));
	pilBig->Add(ptrApp->LoadIcon(IDI_ICON_TRIANGLE));
	pilSmall->Add(ptrApp->LoadIcon(IDI_ICON_SQUARE));
	pilSmall->Add(ptrApp->LoadIcon(IDI_ICON_RECTANGLE));
	pilSmall->Add(ptrApp->LoadIcon(IDI_ICON_CIRCLE));
	pilSmall->Add(ptrApp->LoadIcon(IDI_ICON_TRIANGLE));

	m_listCtrl.SetImageList(pilBig, LVSIL_NORMAL);
	m_listCtrl.SetImageList(pilSmall, LVSIL_SMALL);

	GetClientRect(rect);

	lvCol.mask=LVCF_FMT | LVCF_SUBITEM | LVCF_TEXT | LVCF_WIDTH;
	lvCol.fmt=LVCFMT_CENTER;
	lvCol.pszText="Shape";
	lvCol.iSubItem=0;
	lvCol.cx=rect.Width()/3;
	m_listCtrl.InsertColumn(0, &lvCol);

	lvCol.pszText="Perimeter";
	lvCol.iSubItem=1;
	lvCol.cx=rect.Width()/3;
	m_listCtrl.InsertColumn(1, &lvCol);

	lvCol.pszText="Area";
	lvCol.iSubItem=2;
	lvCol.cx=rect.Width()/3;
	m_listCtrl.InsertColumn(2, &lvCol);

	lvItem.mask=LVIF_TEXT | LVIF_IMAGE;
	lvItem.iItem=0;
	lvItem.iSubItem=0;
	lvItem.pszText="Square";
	lvItem.iImage=0;
	nItem=m_listCtrl.InsertItem(&lvItem);
	lvItem.mask=LVIF_TEXT;
	lvItem.iItem=nItem;
	lvItem.pszText="4*a";
	lvItem.iSubItem=1;
	m_listCtrl.SetItem(&lvItem);
	lvItem.pszText="a^2";
	lvItem.iSubItem=2;
	m_listCtrl.SetItem(&lvItem);

	lvItem.mask=LVIF_TEXT | LVIF_IMAGE;
	lvItem.iItem=1;
	lvItem.iSubItem=0;
	lvItem.pszText="Rectangle";
	lvItem.iImage=1;
	nItem=m_listCtrl.InsertItem(&lvItem);
	lvItem.mask=LVIF_TEXT;
	lvItem.iItem=nItem;
	lvItem.pszText="2*(a+b)";
	lvItem.iSubItem=1;
	m_listCtrl.SetItem(&lvItem);
	lvItem.pszText="a*b";
	lvItem.iSubItem=2;
	m_listCtrl.SetItem(&lvItem);

	lvItem.mask=LVIF_TEXT | LVIF_IMAGE;
	lvItem.iItem=2;
	lvItem.iSubItem=0;
	lvItem.pszText="Circle";
	lvItem.iImage=2;
	nItem=m_listCtrl.InsertItem(&lvItem);
	lvItem.mask=LVIF_TEXT;
	lvItem.iItem=nItem;
	lvItem.pszText="2*Pi*r";
	lvItem.iSubItem=1;
	m_listCtrl.SetItem(&lvItem);
	lvItem.pszText="Pi*r^2";
	lvItem.iSubItem=2;
	m_listCtrl.SetItem(&lvItem);

	lvItem.mask=LVIF_TEXT | LVIF_IMAGE;
	lvItem.iItem=3;
	lvItem.iSubItem=0;
	lvItem.pszText="Triangle";
	lvItem.iImage=3;
	nItem=m_listCtrl.InsertItem(&lvItem);
	lvItem.mask=LVIF_TEXT;
	lvItem.iItem=nItem;
	lvItem.pszText="2*a+c";
	lvItem.iSubItem=1;
	m_listCtrl.SetItem(&lvItem);
	lvItem.pszText="c*h/2";
	lvItem.iSubItem=2;
	m_listCtrl.SetItem(&lvItem);

	return TRUE;
}

void CCCtlDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CCCtlDlg::OnPaint() 
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

HCURSOR CCCtlDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCCtlDlg::OnRadioIcon() 
{
	LONG lStyle;

	lStyle=GetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE);
	lStyle&=~(LVS_TYPEMASK);
	lStyle|=LVS_ICON;
	SetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE, lStyle);
}

void CCCtlDlg::OnRadioList() 
{
	LONG lStyle;

	lStyle=GetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE);
	lStyle&=~(LVS_TYPEMASK);
	lStyle|=LVS_LIST;
	SetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE, lStyle);
}

void CCCtlDlg::OnRadioReport() 
{
	LONG lStyle;

	lStyle=GetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE);
	lStyle&=~(LVS_TYPEMASK);
	lStyle|=LVS_REPORT;
	SetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE, lStyle);
}

void CCCtlDlg::OnRadioSmallicon() 
{
	LONG lStyle;

	lStyle=GetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE);
	lStyle&=~(LVS_TYPEMASK);
	lStyle|=LVS_SMALLICON;
	SetWindowLong(m_listCtrl.GetSafeHwnd(), GWL_STYLE, lStyle);	
}

void CCCtlDlg::OnDestroy() 
{
	CImageList *pilCtrl;

	pilCtrl=m_listCtrl.GetImageList(LVSIL_NORMAL);
	pilCtrl->DeleteImageList();
	delete pilCtrl;
	pilCtrl=m_listCtrl.GetImageList(LVSIL_SMALL);
	pilCtrl->DeleteImageList();
	delete pilCtrl;
	m_listCtrl.DeleteAllItems();

	CDialog::OnDestroy();
}
