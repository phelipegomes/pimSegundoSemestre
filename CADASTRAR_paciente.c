#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void CADASTRAR_paciente()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_novo_cadastro();

	ABRIR_ESCRITA_paciente();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_paciente();
	}
	ESCREVER_ARQUIVO_paciente();

	fclose(arquivo);
	PRINT_dados_gravados();
	return MENU_OPCAO_cadastro();
}