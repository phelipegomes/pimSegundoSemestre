
	// TELA PARA CONSULTAR UM AGENDAMENTO

#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_CANCELAR_agendamento()
{
	int ok = 0;
	PRINT_data_hora_sistema();	
	ABRIR_LEITURA_agendamento();
	PRINT_MENU_cancelar_agendamento();
	FUNCAO_CAPTURA_data_e_unidade();
	PRINT_data_pesquisada();

	while (!feof(arquivo))
	{
		LER_ARQUIVO_agendamento();
		if (codigo_lido >= 1)
		{
			if (age[i].unidade_id == pesquisa_codigo_id)
			{
				if (age[i].data_hora.ano1 == pesquisa_ano_inicio)
				{
					if (age[i].data_hora.mes1 == pesquisa_mes_inicio)
					{
						if (age[i].data_hora.dia1 == pesquisa_dia_inicio)
						{
							PRINT_agendamento();
							codigo_lido[i] = age[i].codigo_id;
							ok++;
							i++;
							continue;
						}
						else
						{
							i++;
							continue;
						};
					}
					else
					{
						i++;
						continue;
					};
				}
				else
				{
					i++;
					continue;
				};
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
	fclose(arquivo);

	if (ok >= 1)
	{
		PRINT_fim_do_relatorio();
		return FUNCAO_selecionar_agendamento();
	}
	if (ok == 0)
	{
		PRINT_fim_do_relatorio();
		PRINT_nenhum_resultado_encontrado();
		return MENU_OPCAO_agendamento();
	}
	return;
}