#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void ESCREVER_ARQUIVO_agendamento()
{
	fflush(arquivo, NULL);
	age[i].ativo = 1;
	fprintf(arquivo, "%i ", age[i].ativo);

	age[i].codigo_id++;
	printf("\n\tCódigo...........: %03d\n", age[i].codigo_id);
	fprintf(arquivo, "%03d ", age[i].codigo_id);

	FUNCAO_CADASTRA_unidade();

	printf("\n\tNome Cliente.....: ");
	setbuf(stdin, NULL);
	scanf("%s", &age[i].nome_cliente);
	fprintf(arquivo, "%s ", age[i].nome_cliente);

	printf("\tSobrenome........: ");
	setbuf(stdin, NULL);
	scanf("%s", &age[i].sobrenome);
	fprintf(arquivo, "%s ", age[i].sobrenome);

	printf("\n\tDoutor(a)........: ");
	setbuf(stdin, NULL);
	scanf("%s", &age[i].nome_medico);
	fprintf(arquivo, "%s ", age[i].nome_medico);

	FUNCAO_CADASTRA_especialidade();

	printf("\n\tAgendar Dia......: ");
	setbuf(stdin, NULL);
	scanf("%d", &age[i].data_hora.dia1);
	fprintf(arquivo, "%02d ", age[i].data_hora.dia1);

	printf("\tAgendar Mês......: ");
	setbuf(stdin, NULL);
	scanf("%d", &age[i].data_hora.mes1);
	fprintf(arquivo, "%02d ", age[i].data_hora.mes1);

	printf("\tAgendar Ano......: ");
	setbuf(stdin, NULL);
	scanf("%d", &age[i].data_hora.ano1);
	fprintf(arquivo, "%04d ", age[i].data_hora.ano1);

	printf("\n\tAgendar Horário..: ");
	setbuf(stdin, NULL);
	scanf("%i", &age[i].data_hora.hora);
	fprintf(arquivo, "%02d\n", age[i].data_hora.hora);

	return;
}