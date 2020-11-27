#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void FUNCAO_CONSULTA_PACIENTE_nome()
{
	int ok = 0;
	FUNCAO_CAPTURA_nome();
	ABRIR_LEITURA_paciente();
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_paciente();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_paciente();	
		if ((strcmp(c[i].nome_cliente, pesquisa_nome) == 0) && (strcmp(c[i].sobrenome, pesquisa_sobrenome) == 0))
		{
			PRINT_paciente();
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
	if (ok == 0)
	{
		PRINT_nenhum_resultado_encontrado();
		return MENU_OPCAO_relatorio();
	}

	fclose(arquivo);
	return;
}