#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void FUNCAO_CADASTRA_especialidade()
{
	int opcao, j, ok = 0;
	do
	{
		printf("\n\tQual Especialidade?\n\n");
		printf("\t1. Ortopedia ....:\n");
		printf("\t2. Ginecologia...:\n");
		printf("\t3. Fisioterapia..:\n");
		printf("\t4. Nutrição......:\n");
		printf("\t5. Cardiologia...:\n");
		printf("\t6. Dermatologia..:");
		printf("\n\t:..Selecionado...: ");
		setbuf(stdin, NULL);
		scanf("%d", &opcao);

		if ((opcao >= 1) && (opcao <= 6))
		{
			switch (opcao)
			{
			case 1:
				fprintf(arquivo, "01 ", age[i].especialidade_id);
				fprintf(arquivo, "Ortopedia ", age[i].nome_especialidade);
				fprintf(arquivo, "50,9 ", age[i].valor_monetario);
				ok++;
				break;
			case 2:
				fprintf(arquivo, "02 ", age[i].especialidade_id);
				fprintf(arquivo, "Ginecologia ", age[i].nome_especialidade);
				fprintf(arquivo, "60,0 ", age[i].valor_monetario);
				ok++;
				break;
			case 3:
				fprintf(arquivo, "03 ", age[i].especialidade_id);
				fprintf(arquivo, "Fisioterapia ", age[i].nome_especialidade);
				fprintf(arquivo, "70,0 ", age[i].valor_monetario);
				ok++;
				break;
			case 4:
				fprintf(arquivo, "04 ", age[i].especialidade_id);
				fprintf(arquivo, "Nutrição ", age[i].nome_especialidade);
				fprintf(arquivo, "78,9 ", age[i].valor_monetario);
				ok++;
				break;
			case 5:
				fprintf(arquivo, "05 ", age[i].especialidade_id);
				fprintf(arquivo, "Cardiologia ", age[i].nome_especialidade);
				fprintf(arquivo, "100,2 ", age[i].valor_monetario);
				ok++;
				break;
			case 6:
				fprintf(arquivo, "06 ", age[i].especialidade_id);
				fprintf(arquivo, "Dermatologia ", age[i].nome_especialidade);
				fprintf(arquivo, "63,5 ", age[i].valor_monetario);
				ok++;
				break;
			}
		}
		else
		{
			printf("\t*Tente Novamente!*\n");
			continue;
		}
	} while (ok == 0);

	return;
}