#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void CADASTRAR_medico()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_novo_cadastro();

	ABRIR_ESCRITA_medico();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_medico();
	}
	ESCREVER_ARQUIVO_medico();

	fclose(arquivo);
	PRINT_dados_gravados();
	return MENU_OPCAO_cadastro();
}