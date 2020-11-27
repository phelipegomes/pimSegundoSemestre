#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void ESCREVER_ARQUIVO_colaborador()
{
	c[i].ativo = 1;
	fprintf(arquivo, "%i ", c[i].ativo);

	c[i].codigo_id++;
	printf("\n\tCódigo...........: %03d\n", c[i].codigo_id);
	fprintf(arquivo, "%03d ", c[i].codigo_id);

	FUNCAO_CADASTRA_unidade();

	PRINT_data_atual();
	printf("\n\tData Admissão....: %02d/%02d/%04d\n", dia_sistema, mes_sistema, ano_sistema);
	fprintf(arquivo, "%02d %02d %04d ", dia_sistema, mes_sistema, ano_sistema);

	printf("\n\tNome Colaborador.: ");
	setbuf(stdin, NULL);
	scanf("%s", &c[i].nome_cliente);
	fprintf(arquivo, "%s ", c[i].nome_cliente);

	printf("\tSobrenome........: ");
	setbuf(stdin, NULL);
	scanf("%s", &c[i].sobrenome);
	fprintf(arquivo, "%s ", c[i].sobrenome);

	printf("\n\tNascimento Dia...: ");
	setbuf(stdin, NULL);
	scanf("%d", &c[i].data_hora.dia2);
	fprintf(arquivo, "%02d ", c[i].data_hora.dia2);

	printf("\tNascimento Mês...: ");
	setbuf(stdin, NULL);
	scanf("%d", &c[i].data_hora.mes2);
	fprintf(arquivo, "%02d ", c[i].data_hora.mes2);

	printf("\tNascimento Ano...: ");
	setbuf(stdin, NULL);
	scanf("%d", &c[i].data_hora.ano2);
	fprintf(arquivo, "%04d ", c[i].data_hora.ano2);

	printf("\n\tUsuário Login....: ");
	setbuf(stdin, NULL);
	scanf("%s", &c[i].usuario);
	fprintf(arquivo, "%s ", c[i].usuario);

	printf("\tUsuário Senha....: ");
	setbuf(stdin, NULL);
	scanf("%s", &c[i].senha);
	fprintf(arquivo, "%s\n", c[i].senha);

	return;
}