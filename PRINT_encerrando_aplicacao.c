#include "cabecalho.h"

void PRINT_encerrando_aplicacao()
{
	system("cls");
	printf("\a\n\n");
	printf("   **************************************\n");
	printf("   *                                    *\n");
	printf("   *         Aplicação Encerrada!       *\n");
	printf("   *                                    *\n");
	printf("   **************************************\n\n");
	system("pause");
	exit(1);
}