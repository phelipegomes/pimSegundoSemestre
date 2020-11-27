#include "cabecalho.h"
REC_ELO r[TOTAL_REGISTROS];

void CADASTRAR_elogio()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_elogio();

	ABRIR_ESCRITA_elogio();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_reclamacao_elogio();
	}
	ESCREVER_ARQUIVO_elogio();

	fclose(arquivo);
	PRINT_dados_gravados();
	return MENU_OPCAO_reclamacao_elogio();
}