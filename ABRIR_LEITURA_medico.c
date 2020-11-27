#include "cabecalho.h"

void ABRIR_LEITURA_medico()
{
	arquivo = fopen("tabela_medico.txt", "r");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}