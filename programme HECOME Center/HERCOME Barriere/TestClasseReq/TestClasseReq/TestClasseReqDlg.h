
// TestClasseReqDlg.h : fichier d'en-t�te
//

#pragma once
#include "Req.h"


// bo�te de dialogue CTestClasseReqDlg
class CTestClasseReqDlg : public CDialogEx
{
// Construction
public:
	CTestClasseReqDlg(CWnd* pParent = NULL);	// constructeur standard

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCLASSEREQ_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV


// Impl�mentation
protected:
	HICON m_hIcon;

	// Fonctions g�n�r�es de la table des messages
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private :
	CReq maRequete;
	bool connexion;
public:
	CString m_sResult;
	afx_msg void OnBnClickedConnect();
	afx_msg void OnBnClickedDispo1();
	afx_msg void OnBnClickedDispo2();
};
