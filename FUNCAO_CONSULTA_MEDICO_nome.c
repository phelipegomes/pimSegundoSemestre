#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void FUNCAO_CONSULTA_MEDICO_nome()
{
	int ok = 0;
	FUNCAO_CAPTURA_nome();
	ABRIR_LEITURA_medico();
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_medico();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_medico();
		if ((strcmp(c[i].nome_cliente, pesquisa_nome) == 0) && (strcmp(c[i].sobrenome, pesquisa_sobrenome) == 0))
		{
			PRINT_medico();
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