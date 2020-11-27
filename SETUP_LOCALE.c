
#include "cabecalho.h"

void SETUP_LOCALE()
{
	//system("MODE con cols=57 lines=36"); desabilita a barra de scroll
	system("color 9f");
	setlocale(LC_ALL, "portuguese");
	return;
}