; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CPropertyPageNewControls
LastTemplate=CPropertyPage
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "CoolControls.h"

ClassCount=7
Class1=CCoolControlsApp
Class2=CCoolControlsDlg
Class3=CPropertyPageEdit

ResourceCount=6
Resource1=IDR_MAINFRAME
Resource2=IDD_DIALOG_NEWCONTROLS
Class4=CPropertyPageButtonComboBox
Resource3=IDD_DIALOG_EDIT
Class5=CPropertyPageListTree
Resource4=IDD_DIALOG_LISTTREE
Class6=CPropertyPageSpinAndOthers
Resource5=IDD_DIALOG_BUTTON_COMBOBOX
Class7=CPropertyPageNewControls
Resource6=IDD_DIALOG_SPINSCROLLHOTKEYPROGRESSSLIDER

[CLS:CCoolControlsApp]
Type=0
HeaderFile=CoolControls.h
ImplementationFile=CoolControls.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC
LastObject=IDC_COMBO_SIMPLE

[CLS:CCoolControlsDlg]
Type=0
HeaderFile=CoolControlsDlg.h
ImplementationFile=CoolControlsDlg.cpp
Filter=D
LastObject=CCoolControlsDlg

[DLG:IDD_DIALOG_EDIT]
Type=1
Class=CPropertyPageEdit
ControlCount=18
Control1=IDC_EDIT_PLAIN,edit,1350631552
Control2=IDC_EDIT_MULTILINE,edit,1353781252
Control3=IDC_HOTKEY,msctls_hotkey32,1350631424
Control4=IDC_RICHEDIT_MULTILINE,RICHEDIT,1353781252
Control5=IDC_EDIT_SPIN_RIGHT,edit,1350631552
Control6=IDC_SPIN_RIGHT,msctls_updown32,1342177334
Control7=IDC_EDIT_SPIN_LEFT,edit,1350631552
Control8=IDC_SPIN_LEFT,msctls_updown32,1342177338
Control9=IDC_EDIT_SPIN_UNATTACHED,edit,1350631552
Control10=IDC_SPIN_UNATTACHED,msctls_updown32,1342177330
Control11=IDC_EDIT_OX,edit,1350631552
Control12=IDC_EDIT_MASKED,edit,1350631552
Control13=IDC_EDIT_NUMERIC,edit,1350631552
Control14=IDC_EDIT_CURRENCY,edit,1350631552
Control15=IDC_CHECK_DISABLE_ALL,button,1342242819
Control16=IDC_STATIC,button,1342177287
Control17=IDC_STATIC,button,1342177287
Control18=IDC_STATIC,static,1342308352

[CLS:CPropertyPageEdit]
Type=0
HeaderFile=PropertyPageEdit.h
ImplementationFile=PropertyPageEdit.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=IDC_CHECK_DISABLE_ALL

[DLG:IDD_DIALOG_BUTTON_COMBOBOX]
Type=1
Class=CPropertyPageButtonComboBox
ControlCount=19
Control1=IDC_BUTTON_DEFAULT,button,1342242817
Control2=IDC_BUTTON_PUSH1,button,1342242816
Control3=IDC_BUTTON_PUSH2,button,1342242816
Control4=IDC_BUTTON_PUSH3,button,1342242816
Control5=IDC_CHECK_RIGHT,button,1342242819
Control6=IDC_CHECK_LEFT,button,1342242851
Control7=IDC_CHECK_PUSHLIKE,button,1342246918
Control8=IDC_RADIO1,button,1342373897
Control9=IDC_RADIO2,button,1342242825
Control10=IDC_RADIO3,button,1342242825
Control11=IDC_RADIO_PUSHLIKE1,button,1342377993
Control12=IDC_RADIO_PUSHLIKE2,button,1342246921
Control13=IDC_RADIO_PUSHLIKE3,button,1342246921
Control14=IDC_COMBO_SIMPLE,combobox,1344339969
Control15=IDC_COMBO_DROPDOWN,combobox,1344339970
Control16=IDC_COMBO_DROPDOWNLIST,combobox,1344339971
Control17=IDC_CHECK_DISABLE_ALL,button,1342242819
Control18=IDC_STATIC,button,1342177287
Control19=IDC_STATIC,button,1342177287

[CLS:CPropertyPageButtonComboBox]
Type=0
HeaderFile=PropertyPageButtonComboBox.h
ImplementationFile=PropertyPageButtonComboBox.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=IDC_BUTTON_PUSH1

[DLG:IDD_DIALOG_LISTTREE]
Type=1
Class=CPropertyPageListTree
ControlCount=7
Control1=IDC_LISTCTRL,SysListView32,1350647817
Control2=IDC_LISTBOX,listbox,1353777409
Control3=IDC_TREE,SysTreeView32,1350631463
Control4=IDC_CHECK_DISABLE_ALL,button,1342242819
Control5=IDC_STATIC,button,1342177287
Control6=IDC_STATIC,button,1342177287
Control7=IDC_STATIC,button,1342177287

[CLS:CPropertyPageListTree]
Type=0
HeaderFile=PropertyPageListTree.h
ImplementationFile=PropertyPageListTree.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC

[DLG:IDD_DIALOG_SPINSCROLLHOTKEYPROGRESSSLIDER]
Type=1
Class=CPropertyPageSpinAndOthers
ControlCount=16
Control1=IDC_CHECK_DISABLE_ALL,button,1342242819
Control2=IDC_SPIN_VERT1,msctls_updown32,1342242848
Control3=IDC_SPIN_VERT2,msctls_updown32,1342242848
Control4=IDC_SPIN_HORZ,msctls_updown32,1342242912
Control5=IDC_SCROLLBAR_VERT,scrollbar,1342242817
Control6=IDC_SCROLLBAR_HORZ,scrollbar,1342177280
Control7=IDC_PROGRESS_HORZ,msctls_progress32,1350565888
Control8=IDC_SLIDER_HORZ_BOTH,msctls_trackbar32,1342242872
Control9=IDC_SLIDER_HORZ_TOP,msctls_trackbar32,1342242836
Control10=IDC_SLIDER_HORZ_BOTTOM,msctls_trackbar32,1342242832
Control11=IDC_SLIDER_VERT_BOTH,msctls_trackbar32,1342242827
Control12=IDC_SLIDER_VERT_LEFT,msctls_trackbar32,1342242870
Control13=IDC_SLIDER_VERT_RIGHT,msctls_trackbar32,1342242819
Control14=IDC_STATIC,button,1342177287
Control15=IDC_STATIC,button,1342177287
Control16=IDC_STATIC,button,1342177287

[CLS:CPropertyPageSpinAndOthers]
Type=0
HeaderFile=PropertyPageSpinAndOthers.h
ImplementationFile=PropertyPageSpinAndOthers.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=CPropertyPageSpinAndOthers

[DLG:IDD_DIALOG_NEWCONTROLS]
Type=1
Class=CPropertyPageNewControls
ControlCount=8
Control1=IDC_DATETIMEPICKER_DROPDOWN,SysDateTimePick32,1342242816
Control2=IDC_DATETIMEPICKER_UPDOWN,SysDateTimePick32,1342242849
Control3=IDC_MONTHCALENDAR,SysMonthCal32,1342242819
Control4=IDC_IPADDRESS,SysIPAddress32,1342242816
Control5=IDC_CHECK_DISABLE_ALL,button,1342242819
Control6=IDC_STATIC,button,1342177287
Control7=IDC_STATIC,button,1342177287
Control8=IDC_STATIC,button,1342177287

[CLS:CPropertyPageNewControls]
Type=0
HeaderFile=PropertyPageNewControls.h
ImplementationFile=PropertyPageNewControls.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=IDC_IPADDRESS

