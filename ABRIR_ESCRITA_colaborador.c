#include "cabecalho.h"

void ABRIR_ESCRITA_colaborador()
{
	arquivo = fopen("tabela_colaborador.txt", "a+");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}