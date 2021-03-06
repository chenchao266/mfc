; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CEx32aView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ex32a.h"
LastPage=0

ClassCount=6
Class1=CEx32aApp
Class2=CEx32aDoc
Class3=CEx32aView
Class4=CMainFrame
Class5=CInPlaceFrame

ResourceCount=8
Resource1=IDD_ABOUTBOX
Resource2=IDR_MENUCONTEXT
Resource4=IDR_CNTR_INPLACE
Resource5=IDR_SRVR_EMBEDDED
Class6=CAboutDlg
Resource6=IDR_MAINFRAME
Resource7=IDR_SRVR_INPLACE
Resource8=IDD_DIALOGBAR

[CLS:CEx32aApp]
Type=0
HeaderFile=ex32a.h
ImplementationFile=ex32a.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC

[CLS:CEx32aDoc]
Type=0
HeaderFile=ex32aDoc.h
ImplementationFile=ex32aDoc.cpp
Filter=N

[CLS:CEx32aView]
Type=0
HeaderFile=ex32aView.h
ImplementationFile=ex32aView.cpp
Filter=C
BaseClass=CRichEditView
VirtualFilter=VWC
LastObject=CEx32aView

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T

[CLS:CInPlaceFrame]
Type=0
HeaderFile=IpFrame.h
ImplementationFile=IpFrame.cpp
Filter=T


[CLS:CAboutDlg]
Type=0
HeaderFile=ex32a.cpp
ImplementationFile=ex32a.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_EDIT_PASTE_SPECIAL
Command15=ID_EDIT_SELECT_ALL
Command16=ID_EDIT_FIND
Command17=ID_EDIT_REPEAT
Command18=ID_EDIT_REPLACE
Command19=ID_OLE_INSERT_NEW
Command20=ID_OLE_EDIT_LINKS
Command21=ID_OLE_EDIT_PROPERTIES
Command22=ID_OLE_VERB_FIRST
Command23=ID_VIEW_TOOLBAR
Command24=ID_VIEW_STATUS_BAR
Command25=ID_APP_ABOUT
CommandCount=25

[MNU:IDR_CNTR_INPLACE]
Type=1
Class=CEx32aView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
CommandCount=9

[TB:IDR_SRVR_INPLACE]
Type=1
Class=CEx32aView
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
Command4=ID_TRANSFER_START
Command5=ID_TRANSFER_STOP
Command6=ID_APP_ABOUT
CommandCount=6

[MNU:IDR_SRVR_EMBEDDED]
Type=1
Class=CEx32aView
Command1=ID_FILE_UPDATE
Command2=ID_FILE_SAVE_COPY_AS
Command3=ID_FILE_PRINT
Command4=ID_FILE_PRINT_PREVIEW
Command5=ID_FILE_PRINT_SETUP
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_EDIT_PASTE_SPECIAL
Command12=ID_EDIT_SELECT_ALL
Command13=ID_EDIT_FIND
Command14=ID_EDIT_REPEAT
Command15=ID_EDIT_REPLACE
Command16=ID_OLE_INSERT_NEW
Command17=ID_OLE_EDIT_LINKS
Command18=ID_OLE_EDIT_PROPERTIES
Command19=ID_OLE_VERB_FIRST
Command20=ID_VIEW_TOOLBAR
Command21=ID_VIEW_STATUS_BAR
Command22=ID_APP_ABOUT
CommandCount=22

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_SELECT_ALL
Command10=ID_EDIT_FIND
Command11=ID_EDIT_REPEAT
Command12=ID_EDIT_REPLACE
Command13=ID_OLE_EDIT_PROPERTIES
Command14=ID_EDIT_UNDO
Command15=ID_EDIT_CUT
Command16=ID_EDIT_COPY
Command17=ID_EDIT_PASTE
Command18=ID_NEXT_PANE
Command19=ID_PREV_PANE
Command20=ID_CANCEL_EDIT_CNTR
CommandCount=20

[ACL:IDR_CNTR_INPLACE]
Type=1
Class=CEx32aView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_CANCEL_EDIT_CNTR
CommandCount=7

[ACL:IDR_SRVR_INPLACE]
Type=1
Class=CEx32aView
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CUT
Command3=ID_EDIT_COPY
Command4=ID_EDIT_PASTE
Command5=ID_EDIT_SELECT_ALL
Command6=ID_EDIT_FIND
Command7=ID_EDIT_REPEAT
Command8=ID_EDIT_REPLACE
Command9=ID_OLE_EDIT_PROPERTIES
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_CANCEL_EDIT_SRVR
CommandCount=14

[ACL:IDR_SRVR_EMBEDDED]
Type=1
Class=CEx32aView
Command1=ID_FILE_UPDATE
Command2=ID_FILE_PRINT
Command3=ID_EDIT_UNDO
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_EDIT_SELECT_ALL
Command8=ID_EDIT_FIND
Command9=ID_EDIT_REPEAT
Command10=ID_EDIT_REPLACE
Command11=ID_OLE_EDIT_PROPERTIES
Command12=ID_EDIT_UNDO
Command13=ID_EDIT_CUT
Command14=ID_EDIT_COPY
Command15=ID_EDIT_PASTE
Command16=ID_NEXT_PANE
Command17=ID_PREV_PANE
Command18=ID_CANCEL_EDIT_CNTR
CommandCount=18

[TB:IDR_MAINFRAME]
Type=1
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_TRANSFER_START
Command8=ID_TRANSFER_STOP
Command9=ID_FILE_PRINT
Command10=ID_APP_ABOUT
CommandCount=10

[MNU:IDR_SRVR_INPLACE]
Type=1
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CUT
Command3=ID_EDIT_COPY
Command4=ID_EDIT_PASTE
Command5=ID_EDIT_PASTE_SPECIAL
Command6=ID_EDIT_SELECT_ALL
Command7=ID_EDIT_FIND
Command8=ID_EDIT_REPEAT
Command9=ID_EDIT_REPLACE
Command10=ID_OLE_INSERT_NEW
Command11=ID_OLE_EDIT_LINKS
Command12=ID_OLE_EDIT_PROPERTIES
Command13=ID_OLE_VERB_FIRST
Command14=ID_VIEW_TOOLBAR
Command15=ID_APP_ABOUT
CommandCount=15

[DLG:IDD_DIALOGBAR]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342308352
Control2=IDC_URL,edit,1350631552
Control3=IDC_START,button,1342242945
Control4=IDC_STOP,button,1342242944

[MNU:IDR_MENUCONTEXT]
Type=1
Command1=ID_EDIT_CLEAR_ALL
CommandCount=1

