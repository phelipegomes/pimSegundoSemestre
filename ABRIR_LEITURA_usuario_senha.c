#include "cabecalho.h"

void ABRIR_LEITURA_usuario_senha()
{
	arquivo = fopen("tabela_usuario_senha.txt", "r");
	if (arquivo == NULL)
	{
		FUNCAO_arquivo_nao_encontrado();
	}
	return;
}