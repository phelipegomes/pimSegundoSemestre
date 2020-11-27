#include "cabecalho.h"

void ABRIR_ESCRITA_reclamacao()
{
	arquivo = fopen("registro_reclamacao.txt", "a+");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}