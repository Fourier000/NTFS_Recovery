
#include "stdafx.h"
#include "Undelete.h"
#include "FindDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


CFindDlg::CFindDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFindDlg::IDD, pParent)
{
}


BEGIN_MESSAGE_MAP(CFindDlg, CDialog)
END_MESSAGE_MAP()


BOOL CFindDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	SetDlgItemText(IDC_EDTFINDTEXT, m_cszFindText);

	GetDlgItem(IDC_EDTFINDTEXT)->SetFocus();

	return FALSE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CFindDlg::OnOK() 
{	
	GetDlgItemText(IDC_EDTFINDTEXT, m_cszFindText);
	CDialog::OnOK();
}