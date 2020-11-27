#include "cabecalho.h"

void ABRIR_ESCRITA_agendamento()
{
	arquivo = fopen("registro_agendamento.txt", "a+");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}