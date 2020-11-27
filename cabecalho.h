


		// .H MAIN DO PROGRAMA



	// CABEÇALHOS SISTEMA
#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

	// CABEÇALHOS CRIADOS
#include "agendamento.h"
#include "arquivos.h"
#include "cadastros.h"
#include "colaborador.h"
#include "definicoes.h"
#include "funcoes.h"
#include "login.h"
#include "medico.h"
#include "menus.h"
#include "paciente.h"
#include "prints.h"
#include "relatorios.h"
#include "structs.h"
#include "variaveis.h"

FILE* arquivo;
FILE* atualizando_arquivo;

	// CONFIGURAR IDIOMA E TAMANHO DO CONSOLE
void SETUP_LOCALE();