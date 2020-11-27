#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_CAPTURA_unidade()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_paciente();
	int opcao, ok = 0;
	do
	{
		printf("\n\tQual Unidade?....:\n\n");
		printf("\t1. Centro........:\n");
		printf("\t2. Leste.........:\n");
		printf("\t3. Oeste.........:\n");
		printf("\t:..Selecionado...: ");
		setbuf(stdin, NULL);
		scanf("%d", &opcao);

		if ((opcao >= 1) && (opcao <= 3))
		{
			switch (opcao)
			{
			case 1:
				pesquisa_codigo_id = 1;
				ok++;
				break;
			case 2:
				pesquisa_codigo_id = 2;
				ok++;
				break;
			case 3:
				pesquisa_codigo_id = 3;
				ok++;
				break;
			}
		}
		else
		{
			printf("\n\t*Tente Novamente!*\n");
			continue;
		}
	} while (ok == 0);
	return;
}