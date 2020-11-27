#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void LER_ARQUIVO_paciente()
{
		fscanf(arquivo, "%i", &c[i].ativo);
		fscanf(arquivo, "%d", &c[i].codigo_id);
		fscanf(arquivo, "%d", &c[i].unidade_id);
		fscanf(arquivo, "%s", &c[i].nome_unidade);
		fscanf(arquivo, "%d", &c[i].data_hora.dia1);
		fscanf(arquivo, "%d", &c[i].data_hora.mes1);
		fscanf(arquivo, "%d", &c[i].data_hora.ano1);
		fscanf(arquivo, "%s", &c[i].nome_cliente);
		fscanf(arquivo, "%s", &c[i].sobrenome);
		fscanf(arquivo, "%d", &c[i].data_hora.dia2);
		fscanf(arquivo, "%d", &c[i].data_hora.mes2);
		fscanf(arquivo, "%d", &c[i].data_hora.ano2);

	return;
}