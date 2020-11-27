
	// .H DE STRUCTS

#include "cabecalho.h"

struct login
{
	char usuario[TAMANHO_USUARIO];
	char senha[TAMANHO_SENHA];
}; typedef struct login login;

struct data_hora
{
	int dia1;
	int mes1;
	int ano1;
	int dia2;
	int mes2;
	int ano2;
	int hora;
}; typedef struct data_hora dh;

struct agendamento
{
	int codigo_id;
	int unidade_id;
	int ativo;
	char nome_unidade[TAMANHO_DESCRICAO];
	dh data_hora;
	int especialidade_id;
	float valor_monetario;
	char nome_cliente[TAMANHO_NOME];
	char sobrenome[TAMANHO_SOBRENOME];
	char nome_medico[TAMANHO_NOME];
	char nome_especialidade[TAMANHO_DESCRICAO];
}; typedef struct agendamento agendar;

struct reclamacao_elogio
{
	int codigo_id;
	int unidade_id;
	int especialidade_id;
	char nome_unidade[TAMANHO_DESCRICAO];
	char nome_medico[TAMANHO_NOME];
	char nome_cliente[TAMANHO_NOME];
	char descricao[TAMANHO_DESCRICAO];
	dh data_hora;
}; typedef struct reclamacao_elogio REC_ELO;

struct cadastrar_pessoa
{
	dh data_hora;
	int ativo;
	int codigo_id;
	int unidade_id;
	int especialidade_id;
	float valor_monetario;
	char nome_cliente[TAMANHO_NOME];
	char sobrenome[TAMANHO_SOBRENOME];
	char nome_medico[TAMANHO_NOME]; 
	char nome_unidade[TAMANHO_NOME];
	char nome_especialidade[TAMANHO_NOME];
	char usuario[TAMANHO_USUARIO];
	char senha[TAMANHO_SENHA];
}; typedef struct cadastrar_pessoa CAD_PES;