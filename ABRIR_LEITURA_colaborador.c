#include "cabecalho.h"

void ABRIR_LEITURA_colaborador()
{
	arquivo = fopen("tabela_colaborador.txt", "r");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}