#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "funcoes.h"
///////////// Sobre o Bot////////////////


int menubot(void){
  char opc[51];
  int minimo = 0, maximo = 4,validar1,validar2,opc1;
  //system("clear");
  printf("========================================================\n");
  printf("==               Menu Bot Control                     ==\n");
  printf("========================================================\n");
  printf("==                                                    ==\n");
  printf("==    1- Configurar                                   ==\n"); 
  printf("==    2- Atualizar Dados                              ==\n"); 
  printf("==    3- Relatório                                    ==\n"); 
  printf("==    4- Exibir Informações Atuais                    ==\n"); 
  printf("==    0- Voltar ao Menu principal                     ==\n"); 
  printf("========================================================\n");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",opc);
  getchar();
  validar1 = validarStringNumerica(opc);
  validar2 = 0;
  if(!validar1){
      opc1 = converterEmInteiro(opc);
      validar2 = validarMenu(opc1,minimo,maximo);
    }
  while (validar1 || validar2){
    printf("\n\t¢ Opção Invalida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",opc);
    getchar();
    validar1 = validarStringNumerica(opc);
    if(!validar1){
      opc1 = converterEmInteiro(opc);
      validar2 = validarMenu(opc1,minimo,maximo);
    }
  }
  
  return opc1;
}

void configBot(void){
  int validar;
  char qntMoradores[51],qntPets[51],qntFrutas[51],qntRefeicao[51],feirasMensais[51];
  system("clear");
  printf("========================================================\n");
  printf("==                  Personalizar Bot                  ==\n");
  printf("========================================================\n");
  printf("\t → Quantas pessoas moram na casa?\n");
  scanf("%[^\n]",qntMoradores);
  getchar();
  validar = validarStringNumerica(qntMoradores);
  while(!validar){
    printf("\t → Quantas pessoas moram na casa?\n");
    scanf("%s",qntMoradores);
    getchar();
    validar = validarStringNumerica(qntMoradores);
  }
  printf("\n\t~Dado cadastrado!");
  sleep(3);
  system("clear");
  printf("\t → Quantos animais há na casa?\n");
  scanf("%[^\n]",qntPets);
  getchar();
  validar = validarStringNumerica(qntPets);
  while(!validar){
    printf("\t → Quantos animais há na casa?\n");
    scanf("%[^\n]",qntPets);
    getchar();
    validar = validarStringNumerica(qntPets);
  }
  printf("\n\t~Dado cadastrado!");
  sleep(3);
  system("clear");
  printf("\t → Quantas frutas são consumidas por dia pela casa?\n");
  scanf("%[^\n]",qntFrutas);
  getchar();
  validar = validarStringNumerica(qntPets);
  while(!validar){
    printf("\t → Quantas frutas são consumidas por dia pela casa?\n");
    scanf("%[^\n]",qntFrutas);
    getchar();
    validar = validarStringNumerica(qntFrutas);
  }
  printf("\n\t~Dado cadastrado!");
  sleep(3);
  system("clear");
  printf("\t → Quantas refeições são feitas ai dia?\n");
  scanf("%[^\n]",qntRefeicao);
  getchar();
  validar = validarStringNumerica(qntRefeicao);
  while(!validar){
    printf("\t → Quantas refeições são feitas ai dia?\n");
    scanf("%[^\n]",qntRefeicao);
    getchar();
    validar = validarStringNumerica(qntRefeicao);
  }
  printf("\n\t~Dado cadastrado!");
  sleep(3);
  system("clear");
  printf("\t → Quantas feiras são feitas ao mes?\n");
  scanf("%[^\n]",feirasMensais);
  getchar();
  validar = validarStringNumerica(feirasMensais);
  while(!validar){
    printf("\t → Quantas feiras são feitas ao mes?\n");
    scanf("%[^\n]",feirasMensais);
    getchar();
    validar = validarStringNumerica(feirasMensais);
  }
  printf("\n\t~Dado cadastrado!");
  sleep(3);
  system("clear");
}

char atualizarBot(void){
  char opc;
  system("clear");
  printf("========================================================\n");
  printf("==                   Atualizar Bot                    ==\n");
  printf("========================================================\n");
  printf(" \n\t*Será exibido todos os dados Atuais*");
  printf(" \n\t→ Qual opção quer atualizar?");
  scanf("%c",&opc);
  getchar();
  return opc;
}

void exibirDados(void){
  system("clear");
  printf("========================================================\n");
  printf("==             Dados Cadastrados no Bot               ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados atuais*");
  getchar();
}

void relatorioGeral(void){
  system("clear");
  printf("========================================================\n");
  printf("==                    Relatório Geral                 ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados Gerais, tais como: entradas, saidas, sobras e dicas para economizar no próximo mês*\n");
  printf("\n\n\t\033[1;32m>>Click Enter...\033[0m");
  getchar();
}

void deletarDadosBot(void){
  char opc;
  system("clear");
  printf("========================================================\n");
  printf("==                Deletar Dados do bot                ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados atuais*");
  printf("\n\t →Qual dado será excluido?");
  scanf("%c",&opc);
  getchar();
}

int botOptions(void){
  int opc;
  opc = menubot();
  if(opc == 1){
    configBot();
  }
  if(opc == 2){
    atualizarBot();
  }
  if(opc == 3){
    relatorioGeral();
  }
  if(opc == 4){
    exibirDados(); 
  }
  if(opc == 5){
    deletarDadosBot();
  }
  return 0;
}