#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "botOperator.h"
#include "funcoes.h"

struct item{
  char nome[81];
  char validade[10];
  int quantidade;
  char perecivel;
};

typedef struct item Item;

//////////////// Sobre o morador ///////////////


int menuMorador(void){
  char entrada[256];
  int opc,validar,validar2,minimo = 0,maximo = 5;
  system("clear");
  printf("========================================================\n");
  printf("==                  Menu Morador                      ==\n");
  printf("========================================================\n");
  printf("==                                                    ==\n");
  printf("==    1- Pegar item                                   ==\n"); //ok
  printf("==    2- Descartar item                               ==\n"); //ok
  printf("==    3- Meu Relatório                                ==\n"); //ok
  printf("==    4- Relatório da Casa                            ==\n"); //ok
  printf("==    5- Adicionar item                               ==\n"); //
  printf("==    0- Voltar ao Menu principal                     ==\n"); 
  printf("========================================================\n"); 
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",entrada);
  getchar();
  validar = validarStringNumerica(entrada);
  validar2 = 0;
  if (!validar){
    opc = converterEmInteiro(entrada);
    validar2 = validarMenu(opc,minimo,maximo);
  }
  while (validar || validar2){
    printf("\n\t¢ opção	Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",entrada);
    getchar();
    validar = validarStringNumerica(entrada);
    if (!validar){
      opc = converterEmInteiro(entrada);
      validar2 = validarMenu(opc,minimo,maximo);
    }
  }
  opc = converterEmInteiro(entrada);
  return opc;
}

int selectionStorage(void){
  char esc[256];
  int opc,validar1,validar2,minimo=0,maximo=3;
  printf("========================================================\n");
  printf("==                  Selection storage                 ==\n");
  printf("========================================================\n");
  printf("==    1- Geladeira              2- Armário            ==\n");
  printf("==    3- Freezer                0- Voltar             ==\n");
  printf("========================================================\n");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",esc);
  getchar();
  validar1 = validarStringNumerica(esc);
  validar2 = 0;
  if (!validar1){
    opc = converterEmInteiro(esc);
    validar2 = validarMenu(opc,minimo,maximo);
  }
  while(validar1 || validar2){
    printf("\n\t¢ Opção Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",esc);
    getchar();
    validar1 = validarStringNumerica(esc);
    if (!validar1){
      opc = converterEmInteiro(esc);
      validar2 = validarMenu(opc,minimo,maximo);
    }
  }
  opc = converterEmInteiro(esc);
  return opc;
}

void storageGeladeira(void){
  char esc[256];
  int validar1;
  system("clear");
  printf("========================================================\n");
  printf("==                      Geladeira                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*Será exibido a lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",esc);
  getchar();
  validar1 = validarStringNumerica(esc);
  // validar2 = 0
  // if (!validar1){
  //   validar2 = validarMenu(esc,minimo,maximo);
  // }
  while(validar1 ){
    printf("\n\t¢ Opção Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",esc);
    getchar();
    validar1 = validarStringNumerica(esc);
    // if (!validar1){
    //   validar2 = validarMenu(esc);
    // }
  }
}

void storageArmario(void){
  char esc[256];
  int validar1;
  system("clear");
  printf("========================================================\n");
  printf("==                        Armário                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*Será exibido a lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",esc);
  getchar();
  validar1 = validarStringNumerica(esc);
  // validar2 = 0
  // if (!validar1){
  //   validar2 = validarMenu(esc);
  // }
  while(validar1){
    printf("\n\t¢ Opção Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",esc);
    getchar();
    validar1 = validarStringNumerica(esc);
    // if (!validar1){
    //   validar2 = validarMenu(esc);
    // }
  }
  // opc = converterEmInteiro(esc);
  // return opc;
}

void storageFreezer(void){
  char opc[256];
  system("clear");
  printf("========================================================\n");
  printf("==                       Freezer                      ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*Será exibido a lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%s",opc);
  getchar();
}

void pegarItem(void){
  system("clear");
  printf("========================================================\n");
  printf("==                      Pegar item                    ==\n");
  printf("========================================================\n");

}

void descarte(void){
  system("clear");
  printf("========================================================\n");
  printf("==                  Descartar item                    ==\n");
  printf("========================================================\n");
}

void relatorioPessoal(void){
  system("clear");
  printf("========================================================\n");
  printf("==                  Relatório Pessoal                 ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados do Individo, tais como: entradas, saidas, descartes\n");
  printf("\n\n\t\033[0;32m>>Click Enter...\033[0m");
  getchar();
}

void adicionarItem(void){
  system("clear");

  int validar1;
  Item* itn;
  char* produto;
  itn = (Item*) malloc(sizeof(Item*));

  printf("========================================================\n");
  printf("==                   Adicionar Item                   ==\n");
  printf("========================================================\n");
  
  printf("\n\n\tNome do item:");
  scanf("%[^\n]",itn->nome);
  getchar();
  printf("\n\tValidade do item:");
  scanf("%[^\n]",itn->validade);
  getchar();
  printf("\n\tQuantidade:");
  scanf("%[^\n]",itn->quantidade);
  getchar();
  printf("\n\tItem é perecivel?(s/n) ");
  scanf("%c",itn->perecivel);
  getchar();
  printf("\n>>> Item Adicionado com sucesso!");
  sleep(5);
}


int userOptions(void){
  int opc1,esc;  
  opc1 = menuMorador();
  if(opc1 == 1){
    pegarItem();
    esc = selectionStorage();

    if(esc == 1){
      storageGeladeira();
    }
    if(esc == 2){
      storageArmario();
    }
    if(esc == 3){
      storageFreezer();
    }
    
  }
  if(opc1 == 2){
    descarte();
    esc = selectionStorage();

    if(esc == 1){
      storageGeladeira();
    }
    if(esc == 2){
      storageArmario();
    }
    if(esc == 3){
      storageFreezer();
    }
    
  }
  if(opc1 == 3){
    relatorioPessoal();
  }
  if(opc1 == 4){
    relatorioGeral(); 
  }
  if(opc1 == 5){
    adicionarItem();
  }
  return opc1;
}


