#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_CADASTRA_unidade()
{
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
				fprintf(arquivo, "01 ", age[i].unidade_id);
				fprintf(arquivo, "Centro ", age[i].nome_unidade);
				ok++;
				break;
			case 2:
				fprintf(arquivo, "02 ", age[i].unidade_id);
				fprintf(arquivo, "Leste ", age[i].nome_unidade);
				ok++;
				break;
			case 3:
				fprintf(arquivo, "03 ", age[i].unidade_id);
				fprintf(arquivo, "Oeste ", age[i].nome_unidade);
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