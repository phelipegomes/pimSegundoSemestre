#include "cabecalho.h"
REC_ELO r[TOTAL_REGISTROS];

void FUNCAO_CADASTRAR_reclamacao() // TELA PARACE QUE ESTÁ FUNCIONANDO TUDINHO
{
	PRINT_data_hora_sistema();
	PRINT_MENU_reclamacao();

	ABRIR_ESCRITA_reclamacao();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_reclamacao_elogio();
	}
	ESCREVER_ARQUIVO_reclamacao();

	fclose(arquivo);
	PRINT_dados_gravados();
	return MENU_OPCAO_reclamacao_elogio();
}