#if !defined BARR
# define BARR

#include "CIEH12.h"
class CBarri�re
{
public:
	CBarri�re(CCIEH12 *monCieh12);
	~CBarri�re();
	void ouvrir();
	void fermer();

private:
	CCIEH12* pMonCieh12;
};

#endif