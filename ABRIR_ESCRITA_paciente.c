#include "cabecalho.h"

void ABRIR_ESCRITA_paciente()
{
	arquivo = fopen("tabela_paciente.txt", "a+");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}