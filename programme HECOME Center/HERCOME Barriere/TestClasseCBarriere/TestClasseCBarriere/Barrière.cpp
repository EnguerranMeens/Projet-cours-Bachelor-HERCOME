#include "stdafx.h"
#include "Barri�re.h"


CBarri�re::CBarri�re(CCIEH12 *monCieh12)
{
	pMonCieh12 = monCieh12;
}


CBarri�re::~CBarri�re()
{
}

void CBarri�re::ouvrir()
{
	//on ouvre la barriere
	pMonCieh12->ecrireSortie(true);

	// on attend 2s
	Sleep(2000);

	// on fermer la barriere
	fermer();
}

void CBarri�re::fermer()
{
	pMonCieh12->ecrireSortie(false);
}
