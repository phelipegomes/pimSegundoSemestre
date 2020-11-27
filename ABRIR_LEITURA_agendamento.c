#include "cabecalho.h"

void ABRIR_LEITURA_agendamento()
{
	arquivo = fopen("registro_agendamento.txt", "r");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}