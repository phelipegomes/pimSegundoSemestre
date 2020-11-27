#include "cabecalho.h"

void ABRIR_ATUALIZA_colaborador()
{
	atualizando_arquivo = fopen("tabela_colaborador_ATUALIZANDO.txt", "w");
	if (atualizando_arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}