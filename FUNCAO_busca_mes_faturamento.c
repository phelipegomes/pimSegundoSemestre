//
//	// BUSCA M�S NO RELAT�RIO E SOMA OS VALORES - OK
//
//#include "cabecalho.h"
//agendar age[TOTAL_REGISTROS];
//
//void FUNCAO_busca_mes_faturamento() // analisar tela ainda nao funciona!
//{
//	int ok = 0;
//	float valor_total_monetario = 0; 
//	PRINT_data_hora_sistema();
//	PRINT_MENU_faturamento();
//	ABRIR_LEITURA_agendamento();
//
//	while (!feof(arquivo)) // ARRUMAR ESSA FUN��O
//	{
//		LER_ARQUIVO_agendamento();		
//		if (age[i].ativo == 1)
//		{
//			if (age[i].data_hora.mes1 == pesquisa_mes_inicio)
//			{
//				ok++;
//				PRINT_faturamento();			
//				valor_total_monetario = (valor_total_monetario + age[i].valor_monetario);
//			}
//		}
//	}
//	fclose(arquivo);
//	return PRINT_FATURAMENTO_mensal(&valor_total_monetario, &ok);
//}