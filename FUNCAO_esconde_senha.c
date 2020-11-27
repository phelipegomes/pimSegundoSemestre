#include "cabecalho.h"

int FUNCAO_esconde_senha()
{
	i = 0;
	char ch = NULL;
	int tamanho = sizeof(senha_digitado);
	memset(senha_digitado, '\0', 10);

	do {
		setbuf(stdin, NULL);
		ch = _getch(senha_digitado);

		if (ch >= 48 && ch <= 122)
		{
			printf("*");
			senha_digitado[i] = ch;
			i++;
			continue;
		}
		else if (ch != ENTER)
		{
			printf("\a");
		}

	} while (ch != ENTER);

	return FUNCAO_verificar_login(&usuario_digitado, &senha_digitado);
}