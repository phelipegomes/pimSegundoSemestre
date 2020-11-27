#include "cabecalho.h"

void ABRIR_ESCRITA_elogio()
{
	arquivo = fopen("registro_elogio.txt", "a+");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}