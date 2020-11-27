#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void LER_ARQUIVO_agendamento()
{
	fscanf(arquivo, "%i", &age[i].ativo);
	fscanf(arquivo, "%d", &age[i].codigo_id);
	fscanf(arquivo, "%d", &age[i].unidade_id);
	fscanf(arquivo, "%s", &age[i].nome_unidade);
	fscanf(arquivo, "%s", &age[i].nome_cliente);
	fscanf(arquivo, "%s", &age[i].sobrenome);
	fscanf(arquivo, "%s", &age[i].nome_medico);
	fscanf(arquivo, "%d", &age[i].especialidade_id);
	fscanf(arquivo, "%s", &age[i].nome_especialidade);
	fscanf(arquivo, "%f", &age[i].valor_monetario);
	fscanf(arquivo, "%d", &age[i].data_hora.dia1);
	fscanf(arquivo, "%d", &age[i].data_hora.mes1);
	fscanf(arquivo, "%d", &age[i].data_hora.ano1);
	fscanf(arquivo, "%d", &age[i].data_hora.hora);

	return;
}