; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDDECliDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "DDECli.h"

ClassCount=3
Class1=CDDECliApp
Class2=CDDECliDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_DDECLI_DIALOG
Resource4=IDD_DIALOG_TEST

[CLS:CDDECliApp]
Type=0
HeaderFile=DDECli.h
ImplementationFile=DDECli.cpp
Filter=N

[CLS:CDDECliDlg]
Type=0
HeaderFile=DDEDlg.h
ImplementationFile=DDEDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CDDECliDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=DDEDlg.h
ImplementationFile=DDEDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DDECLI_DIALOG]
Type=1
Class=CDDECliDlg
ControlCount=4
Control1=IDC_BUTTON_CONNECT,button,1342242816
Control2=IDC_EDIT,edit,1350633604
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_TOPICNAME,edit,1350631552

[DLG:IDD_DIALOG_TEST]
Type=1
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

