#include "cabecalho.h"

void FUNCAO_CAPTURA_nome()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_paciente();

	printf("\tNome...........: ");
	setbuf(stdin, NULL);
	scanf("%s", pesquisa_nome);
	//ver_dia(&pesquisa_nome); sem uso

	printf("\tSobrenome......: ");
	setbuf(stdin, NULL);
	scanf("%s", pesquisa_sobrenome);
	//ver_dia(&pesquisa_nome); sem uso
	return;
}