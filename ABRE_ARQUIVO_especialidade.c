#include "cabecalho.h"

void ABRE_ARQUIVO_especialidade()
{
	arquivo = fopen("tabela_especialidade_valor.txt", "r");
	if (arquivo == NULL)
	{
		printf("\n\tArquivo não encontrado!");
		exit(1);
	}
	return;
}