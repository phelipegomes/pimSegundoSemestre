#include "cabecalho.h"
REC_ELO r[TOTAL_REGISTROS];

void FUNCAO_busca_data_reclamacao()
{
	int ok = 0;
	PRINT_MENU_reclamacao(); // TESTAR TELA
	ABRIR_LEITURA_reclamacao();

	while (!feof(arquivo))
	{
		LER_ARQUIVO_reclamacao_elogio();
		if (r[i].data_hora.ano1 > pesquisa_ano_inicio)
		{
			if (r[i].data_hora.ano2 <= pesquisa_ano_final)
			{
				if (r[i].data_hora.mes2 < pesquisa_mes_final)
				{
					if (r[i].data_hora.dia2 < pesquisa_dia_final)
					{
						PRINT_reclamacao();
						ok++;
						i++;
						continue;
					}
				}
				else if (r[i].data_hora.mes2 == pesquisa_mes_final)
				{
					if (r[i].data_hora.dia2 <= pesquisa_dia_final)
					{
						PRINT_reclamacao();
						ok++;
						i++;
						continue;
					}
					else if (r[i].data_hora.dia2 > pesquisa_dia_final)
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

		if (r[i].data_hora.ano1 == pesquisa_ano_inicio)
		{
			if (r[i].data_hora.mes1 == pesquisa_mes_inicio)
			{
				if (r[i].data_hora.dia1 >= pesquisa_dia_inicio)
				{
					if (r[i].data_hora.ano2 <= pesquisa_ano_final)
					{
						PRINT_reclamacao();
						ok++;
						i++;
						continue;
					}
				}
				else if (r[i].data_hora.ano2 > pesquisa_ano_final)
				{
					i++;
					continue;
				}
				else if (r[i].data_hora.mes1 < pesquisa_mes_inicio)
				{
					i++;
					continue;
				}
				else if (r[i].data_hora.dia1 < pesquisa_dia_inicio)
				{
					i++;
					continue;
				}
			}
			else if (r[i].data_hora.mes1 > pesquisa_mes_inicio)
			{
				PRINT_reclamacao();
				ok++;
				i++;
				continue;
			}
			else if (r[i].data_hora.mes1 < pesquisa_mes_inicio)
			{
				i++;
				continue;
			}
		}

		else if (r[i].data_hora.ano1 < pesquisa_ano_inicio)
		{
			i++;
			continue;
		}
	}
	if (ok == 0)
	{
		PRINT_nenhum_resultado_encontrado();
	}

	fclose(arquivo);
	PRINT_fim_do_relatorio();
	return MENU_OPCAO_relatorio();
}