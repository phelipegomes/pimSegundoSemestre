#include <stdio.h>
#include <stdlib.h>
#include <string.h>    

#define ARQUIVO_ESCOLHIDO 1
#define LINHA_DO_ARQUIVO 2

int main2(int argc, char* argv[]) {
    FILE* input = fopen(argv[ARQUIVO_ESCOLHIDO], "r"); //Arquivo de entrada.
    FILE* output = fopen("transferindo.txt", "w"); //Arquivo de saída.
    char texto[1001] = ""; //Uma string larga o suficiente para extrair o texto total de cada linha.
    unsigned int linha_selecionada = atoi(argv[LINHA_DO_ARQUIVO]);
    unsigned int linha_atual = 1;
    while (fgets(texto, 1001, input) != NULL) {
        if (linha_atual != linha_selecionada) {
            fputs(texto, output);
        }
        memset(texto, 0, sizeof(char) * 1001);
        linha_atual += 1;
    }
    fclose(input);
    fclose(output);
    remove(argv[ARQUIVO_ESCOLHIDO]);
    rename("transferindo.txt", argv[ARQUIVO_ESCOLHIDO]);
    return 0;
}