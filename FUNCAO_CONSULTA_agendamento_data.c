
	// TELA PARA CONSULTAR UM AGENDAMENTO

#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_CONSULTA_agendamento_data()
{
	int ok = 0;

	PRINT_MENU_CONSULTAR_agendamento();
	FUNCAO_CAPTURA_data();
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_agendamento();
	ABRIR_LEITURA_agendamento();

	while (!feof(arquivo))
	{
		LER_ARQUIVO_agendamento();
		if (age[i].data_hora.ano1 == pesquisa_ano_inicio)
		{
			if (age[i].data_hora.mes1 == pesquisa_mes_inicio)
			{
				if (age[i].data_hora.dia1 == pesquisa_dia_inicio)
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
			else
			{
				i++;
				continue;
			}
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