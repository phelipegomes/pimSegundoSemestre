#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_verificar_codigo_agendamento(int *opcao)
{
	ABRIR_ATUALIZA_agendamento();
	ABRIR_LEITURA_agendamento();

	char arq_completo[1000] = "";
	char sim_ou_nao, ch;
	static int master = 1, ok = 0, ok2 = 0;
	printf("\tDigite a Senha Master(1)..: ");
	//scanf("%i", &master);

	for (;i < TOTAL_REGISTROS;)
	{
		if (master == 1)
		{
			static int a = 0; // variavel para rodar nesse loop
			if (codigo_lido[a] == *opcao)
			{
				while (fgets(arq_completo, 1000, arquivo) != NULL)
				{
					static int i = 0; // muda o valor mas o valor se mantém
					if (age[i].codigo_id != *opcao) // copiar os dados da linha pro novo arquivo
					{
						fputs(arq_completo, atualizando_arquivo);
						memset(arq_completo, 0, sizeof(char) * 1000);
						i++;
						continue;
					}
					else if (age[i].codigo_id == *opcao) // ignorar a linha referênte ao código selecionado, não copia para o novo arquivo
					{
						memset(arq_completo, 0, sizeof(char) * 1000);
						ok++;
						i++;
						continue;
					}
				}
				PRINT_data_hora_sistema();
				PRINT_MENU_cancelar_agendamento();
				PRINT_agendamento_cancelado(opcao);
				fclose(arquivo);
				fclose(atualizando_arquivo);
				remove("registro_agendamento.txt");
				rename("registro_agendamento_ATUALIZANDO.txt", "registro_agendamento.txt");
				break;
			}
			else
			{
				a++;
				ok2++;
				continue;
			}
		}
	}
	if (ok2 == 10)
	{
		PRINT_nenhum_resultado_encontrado();
	}
	if (master != 1)
	{
		PRINT_senha_master_invalida();
		fclose(arquivo);
		fclose(atualizando_arquivo);
		return FUNCAO_verificar_codigo_agendamento(opcao);
	}
	if ((ok == 0) && (ok2 >= 1))
	{
		PRINT_nenhum_resultado_encontrado();
		fclose(arquivo);
		fclose(atualizando_arquivo);
	}
	return MENU_OPCAO_agendamento();
}