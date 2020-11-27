#include "cabecalho.h"
//login log[TOTAL_USUARIOS];

int FUNCAO_CAPTURA_usuario_senha()
{
	printf("              Informe seu Login\n");
	printf("              Usuário.: ");
	setbuf(stdin, NULL);
	scanf("%s", &usuario_digitado);
	printf("              Senha...: ");
	setbuf(stdin, NULL);
	FUNCAO_esconde_senha();
}