#if !defined(AFX_FINDDLG_H__C5A7A090_E7DC_41A0_B93C_C4BA43EC5244__INCLUDED_)
#define AFX_FINDDLG_H__C5A7A090_E7DC_41A0_B93C_C4BA43EC5244__INCLUDED_

class CFindDlg : public CDialog
{
public:
	CFindDlg(CWnd* pParent = NULL);   // standard constructor

	CString m_cszFindText;
// Dialog Data
	enum { IDD = IDD_DLGFIND };
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
};
#endif // !defined(AFX_FINDDLG_H__C5A7A090_E7DC_41A0_B93C_C4BA43EC5244__INCLUDED_)
