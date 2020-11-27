#include "cabecalho.h"

void ABRIR_LEITURA_paciente()
{
	arquivo = fopen("tabela_paciente.txt", "r");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}