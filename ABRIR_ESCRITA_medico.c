#include "cabecalho.h"

void ABRIR_ESCRITA_medico()
{
	arquivo = fopen("tabela_medico.txt", "a+");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}