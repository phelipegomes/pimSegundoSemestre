#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void FUNCAO_CONSULTA_MEDICO_codigo_id()
{
	int ok = 0;
	FUNCAO_CAPTURA_codigo_id();
	ABRIR_LEITURA_medico();
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_medico();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_medico();
		if (c[i].codigo_id == pesquisa_codigo_id)
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