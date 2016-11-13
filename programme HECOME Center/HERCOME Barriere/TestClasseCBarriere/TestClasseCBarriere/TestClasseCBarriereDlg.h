
// TestClasseCBarriereDlg.h : fichier d'en-t�te
//

#pragma once
#include "Barri�re.h"
#include "CIEH12.h"

// bo�te de dialogue CTestClasseCBarriereDlg
class CTestClasseCBarriereDlg : public CDialogEx
{
// Construction
public:
	CTestClasseCBarriereDlg(CWnd* pParent = NULL);	// constructeur standard

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCLASSECBARRIERE_DIALOG };
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
	CCIEH12* pMonCIEH12;
	CBarri�re* pMaBarriere;
public:
	afx_msg void OnBnClickedOuvrir();
	afx_msg void OnBnClickedFermer();
	void receive();
};
