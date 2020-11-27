
	// TELA PARA CONSULTAR UM AGENDAMENTO POR UNIDADE

#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_CONSULTA_agendamento_unidade()
{
	int ok = 0;

	PRINT_MENU_CONSULTAR_agendamento();
	FUNCAO_CAPTURA_unidade();
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_agendamento();
	ABRIR_LEITURA_agendamento();

	while (!feof(arquivo))
	{
		LER_ARQUIVO_agendamento();
		if (age[i].unidade_id == pesquisa_codigo_id)
		{
			PRINT_agendamento();
			i++;
			ok++;
			continue;
		}
		else
		{
			i++;
			continue;
		}
	}
	fclose(arquivo);
	if (ok == 0)
	{
		PRINT_nenhum_resultado_encontrado();
		return MENU_OPCAO_agendamento();
	}
	PRINT_fim_do_relatorio();
	return MENU_OPCAO_agendamento();
}