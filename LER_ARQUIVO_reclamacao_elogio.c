#include "cabecalho.h"
REC_ELO r[TOTAL_REGISTROS];

void LER_ARQUIVO_reclamacao_elogio()
{
		fscanf(arquivo, "%d", &r[i].codigo_id);
		fscanf(arquivo, "%d", &r[i].unidade_id);
		fscanf(arquivo, "%s", &r[i].nome_unidade); 
		fscanf(arquivo, "%d", &r[i].data_hora.dia1);
		fscanf(arquivo, "%d", &r[i].data_hora.mes1);
		fscanf(arquivo, "%d", &r[i].data_hora.ano1);
		fscanf(arquivo, "%s", r[i].nome_cliente);
		fscanf(arquivo, "%s", r[i].nome_medico);
		fscanf(arquivo, "%[^\n]s", r[i].descricao);

	return;
}