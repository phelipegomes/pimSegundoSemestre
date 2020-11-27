#include "cabecalho.h"
REC_ELO r[TOTAL_REGISTROS];

void ESCREVER_ARQUIVO_elogio()
{
	r[i].codigo_id++;
	printf("\n\tCódigo Elogio....: %03d\n", r[i].codigo_id);
	fprintf(arquivo, "%03d ", r[i].codigo_id);

	FUNCAO_CADASTRA_unidade();

	PRINT_data_atual();
	printf("\n\tData Elogio......: %02d/%02d/%04d\n", dia_sistema, mes_sistema, ano_sistema);
	fprintf(arquivo, "%02d %02d %04d ", dia_sistema, mes_sistema, ano_sistema);

	printf("\n\tNome Cliente.....: ");
	setbuf(stdin, NULL);
	scanf("%s", r[i].nome_cliente);
	fprintf(arquivo, "%s ", r[i].nome_cliente);

	printf("\n\tNome Doutor(a)...: ");
	setbuf(stdin, NULL);
	scanf("%s", r[i].nome_medico);
	fprintf(arquivo, "%s ", r[i].nome_medico);

	printf("\n\tDescrição........:\n\t");
	setbuf(stdin, NULL);
	scanf("%[^\n]s", r[i].descricao);
	fprintf(arquivo, "%s\n", r[i].descricao);

	return;
}