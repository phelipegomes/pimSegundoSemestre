#include "cabecalho.h"

void ABRIR_LEITURA_reclamacao()
{
	arquivo = fopen("registro_reclamacao.txt", "r");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}