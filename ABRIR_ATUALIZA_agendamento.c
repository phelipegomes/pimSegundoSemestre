#include "cabecalho.h"

void ABRIR_ATUALIZA_agendamento()
{
	atualizando_arquivo = fopen("registro_agendamento_ATUALIZANDO.txt", "w");
	if (atualizando_arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}