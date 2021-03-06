#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_FATURAMENTO_diario_unidade()
{
	int ok = 0;
	char nome_unidade = "";
	float valor_total_monetario = 0;
	PRINT_data_hora_sistema();
	PRINT_data_e_unidade_pesquisada();
	PRINT_MENU_faturamento();
	ABRIR_LEITURA_agendamento();

	while (!feof(arquivo))
	{
		LER_ARQUIVO_agendamento();
		if (age[i].ativo == 1)
		{
			if (age[i].unidade_id == pesquisa_codigo_id)
			{
				if (age[i].data_hora.ano1 == pesquisa_ano_inicio)
				{
					if (age[i].data_hora.mes1 == pesquisa_mes_inicio)
					{
						if (age[i].data_hora.dia1 == pesquisa_dia_inicio)
						{
							PRINT_faturamento();
							valor_total_monetario = valor_total_monetario + age[i].valor_monetario;
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
	if (ok == 0)
	{
		fclose(arquivo);
		PRINT_nenhum_resultado_encontrado();
		return MENU_OPCAO_relatorio();
	}
	if (ok >= 1)
	{
		nome_unidade = age[i].nome_unidade;
		fclose(arquivo);
		return PRINT_FATURAMENTO_mensal(&valor_total_monetario, &ok, &nome_unidade);
	}
}