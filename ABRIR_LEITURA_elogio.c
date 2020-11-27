#include "cabecalho.h"

void ABRIR_LEITURA_elogio()
{
	arquivo = fopen("registro_elogio.txt", "r");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}