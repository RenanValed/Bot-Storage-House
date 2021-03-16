#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
///////////// Sobre o Bot////////////////


int menubot(void){
  char opc[51];
  int minimo = 0, maximo = 5,validar1,validar2,validar3,validar4,opc1;
  system("clear");
  printf("========================================================\n");
  printf("==               Menu Bot Control                     ==\n");
  printf("========================================================\n");
  printf("==                                                    ==\n");
  printf("==    1- Configurar                                   ==\n"); 
  printf("==    2- Atualizar Dados                              ==\n"); 
  printf("==    3- Relatório                                    ==\n"); 
  printf("==    4- Exibir Informações Atuais                    ==\n"); 
  printf("==    5- Deletar Dados                                ==\n"); 
  printf("==    0- Voltar ao Menu principal                     ==\n"); 
  printf("========================================================\n");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",opc);
  getchar();
  validar1 = temLetra(opc);
  validar2 = temEspaco(opc);
  validar3 = verificarASCII_invalida(opc);
  validar4 = 0;
  if(!validar1 && !validar2 && !validar3){
      opc1 = converterEmInteiro(opc);
      validar4 = validarMenu(opc1,minimo,maximo);
    }
  printf("v1: %d\n",validar1);// int var1 1
  printf("v2: %d\n",validar2);// int var2 1
  printf("v3: %d\n",validar3);// int var3 1
  printf("v4: %d\n",validar4);// int var4 0 - minimo maximo
  while (validar1 || validar2 || validar3 || validar4){
    if (validar1){
      printf("\n\t¢ Você usou letras!");
    }
    if(validar2){
      printf("\n\t¢ Você usou espaco!");
    }
    printf("\n\t¢ Opção Invalida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",opc);
    getchar();
    validar1 = temLetra(opc);
    validar2 = temEspaco(opc);
    validar3 = verificarASCII_invalida(opc);
    if(!validar1 && !validar2 && !validar3){
      opc1 = converterEmInteiro(opc);
      validar4 = validarMenu(opc1,minimo,maximo);
    }
    printf("v1: %d\n",validar1);
    printf("v2: %d\n",validar2);
    printf("v3: %d\n",validar3);
    printf("v4: %d\n",validar4);
  }
  
  return opc1;
}

void configBot(void){
  int qntPets,qntFrutas,qntRefeicao,feirasMensais,validar;
  char qntMoradores[51];
  system("clear");
  printf("========================================================\n");
  printf("==                  Personalizar Bot                  ==\n");
  printf("========================================================\n");
  printf("\t → Quantas pessoas moram na casa?\n");
  scanf("%s",qntMoradores);
  getchar();
  validar = temDigito(qntMoradores);
  while(!validar){
    printf("\t → Quantas pessoas moram na casa?\n");
    scanf("%s",qntMoradores);
    getchar();
    validar = temDigito(qntMoradores);
  }
  printf("\t → Quantos animais há na casa?\n");
  scanf("%d",&qntPets);
  getchar();
  printf("\t → Quantas frutas são consumidas por dia pela casa?\n");
  scanf("%d",&qntFrutas);
  getchar();
  printf("\t → Quantas refeições são feitas ai dia?\n");
  scanf("%d",&qntRefeicao);
  getchar();
  printf("\t → Quantas feiras são feitas ao mes?\n");
  scanf("%d",&feirasMensais);
  getchar();
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