#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_busca_mes_agendamento() // FUNCAO FUNCIONANDO CORRETAMENTE
{
	int ok = 0;
	PRINT_data_hora_sistema();
	PRINT_MENU_agendamento();
	ABRIR_LEITURA_agendamento();

	while (!feof(arquivo))
	{
		LER_ARQUIVO_agendamento();

		if (age[i].ativo == 1)
		{
			if (age[i].unidade_id == pesquisa_codigo_id)
			{
				if (pesquisa_ano_inicio == age[i].data_hora.ano1)
				{
					if (pesquisa_mes_inicio == age[i].data_hora.mes1)
					{
						if (pesquisa_dia_inicio == age[i].data_hora.dia1)
						{
							PRINT_mes_agendamento();
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
		else
		{
			i++;
			continue;
		}
	}
	if (feof(arquivo))
	{
		PRINT_fim_do_relatorio();
	}
	if (ok == 0)
	{
		PRINT_nenhum_resultado_encontrado();
	}
	fclose(arquivo);
	return MENU_OPCAO_relatorio();
}