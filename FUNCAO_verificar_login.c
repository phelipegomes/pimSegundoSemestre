#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];
//login log[TOTAL_REGISTROS];

int FUNCAO_verificar_login(char *usuario_digitado, char *senha_digitado)
{
	int ok = 0;
	//ABRIR_LEITURA_usuario_senha();
	ABRIR_LEITURA_colaborador();

	while (!feof(arquivo))
	{
		//LER_ARQUIVO_usuario_senha();
		LER_ARQUIVO_colaborador();
		if ((strcmp(usuario_digitado, c[i].usuario) == 0) && (strcmp(senha_digitado, c[i].senha) == 0))
		{
			ok = 1;
			break;
		}
		else
		{
			i++;
			continue;
		}
	}
	fclose(arquivo);
	return ok;
}