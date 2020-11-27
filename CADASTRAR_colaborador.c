#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void CADASTRAR_colaborador()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_novo_cadastro();

	ABRIR_ESCRITA_colaborador();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_colaborador();
	}
	ESCREVER_ARQUIVO_colaborador();

	fclose(arquivo);
	PRINT_dados_gravados();
	return MENU_OPCAO_cadastro();
}