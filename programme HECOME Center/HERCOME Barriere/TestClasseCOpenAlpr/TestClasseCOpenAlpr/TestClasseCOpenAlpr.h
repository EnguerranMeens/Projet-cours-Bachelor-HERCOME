
// TestClasseCOpenAlpr.h : fichier d'en-tête principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CTestClasseCOpenAlprApp :
// Consultez TestClasseCOpenAlpr.cpp pour l'implémentation de cette classe
//

class CTestClasseCOpenAlprApp : public CWinApp
{
public:
	CTestClasseCOpenAlprApp();

// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation

	DECLARE_MESSAGE_MAP()
};

extern CTestClasseCOpenAlprApp theApp;