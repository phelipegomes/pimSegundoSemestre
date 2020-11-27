#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void FUNCAO_CONSULTA_PACIENTE_unidade() // criar uma funcao para colaborador e medico
{
	int ok = 0;
	FUNCAO_CAPTURA_unidade();
	ABRIR_LEITURA_paciente();
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_paciente();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_paciente();
		if (c[i].unidade_id == pesquisa_codigo_id)
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