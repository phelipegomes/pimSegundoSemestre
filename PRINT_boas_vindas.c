#include "cabecalho.h"

void PRINT_boas_vindas()
{
	system("cls");
	printf("\a\n\n\n");
	printf("   **************************************\n");
	printf("   *                                    *\n");
	printf("             Boas Vindas %s!             \n", usuario_digitado);
	printf("              Bom Trabalho!              \n");
	printf("   *                                    *\n");
	printf("   **************************************\n");
	system("pause");
	return;
}