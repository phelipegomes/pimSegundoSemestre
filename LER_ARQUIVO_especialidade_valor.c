
	// LER ARQUIVO COM VALORES DE CONSULTAS

#include "cabecalho.h"
CAD_PES r[TOTAL_REGISTROS];

void LER_ARQUIVO_especialidade_valor()
{
		fscanf(arquivo, "%d", &r[i].especialidade_id);
		fscanf(arquivo, "%s", &r[i].nome_especialidade);
		fscanf(arquivo, "%f", &r[i].valor_monetario);

	return;
}