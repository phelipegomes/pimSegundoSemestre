#include "cabecalho.h"

void ABRIR_LEITURA_especialidade_valor()
{
	arquivo = fopen("tabela_especialidade_valor.txt", "r");
	if (arquivo == NULL)
	{
		printf("\n\tArquivo n�o encontrado!");
		exit(1);
	}
	return;
}