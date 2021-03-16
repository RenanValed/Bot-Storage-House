#include <stdio.h>
#include <stdlib.h>
#include "botOperator.h"
//////////////// Sobre o morador ///////////////


int menuMorador(void){
  int opc;
  system("clear");
  printf("========================================================\n");
  printf("==                  Menu Morador                      ==\n");
  printf("========================================================\n");
  printf("==                                                    ==\n");
  printf("==    1- Pegar item                                   ==\n"); //ok
  printf("==    2- Descartar item                               ==\n"); //ok
  printf("==    3- Meu Relatório                                ==\n"); //ok
  printf("==    4- Relatório da Casa                            ==\n"); //ok
  printf("==    5- Metas da semana                              ==\n"); //
  printf("==    0- Voltar ao Menu principal                     ==\n"); 
  printf("========================================================\n"); 
  printf("\n\t→ Digite sua opção:\n");
  scanf("%d",&opc);
  getchar();
  while (opc < 0 && opc > 5){
    printf("\n\t¢ opção	Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%d",&opc);
    getchar();
  }
  return opc;
}

int selectionStorage(void){
  int esc;
  printf("========================================================\n");
  printf("==                  Selection storage                 ==\n");
  printf("========================================================\n");
  printf("==    1- Geladeira              2- Armário            ==\n");
  printf("==    3- Freezer                0- Voltar             ==\n");
  printf("========================================================\n");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%d",&esc);
  getchar();
  while(esc != 0 && esc != 1 && esc != 2 && esc != 3){
    printf("\n\t¢ Opção Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%d",&esc);
    getchar();
  }
  return esc;
}

void storageGeladeira(void){
  char opc[51];
  system("clear");
  printf("========================================================\n");
  printf("==                      Geladeira                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*Será exibido a lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%s",opc);
  getchar();
}

void storageArmario(void){
  char opc[51];
  system("clear");
  printf("========================================================\n");
  printf("==                        Armário                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*Será exibido a lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%s",opc);
  getchar();
}

void storageFreezer(void){
  char opc[51];
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

void weekGoal(void){
  system("clear");
  printf("========================================================\n");
  printf("==                   Metas da Semana                  ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados do Individo, tais como: o que aconteceu durante a semana passada e será inibido uma meta, pelo bot, assim como também o usuário poderá criar as própias metas.\n");
  printf("\n\n\t\033[0;32m>>Click Enter...\033[0m");
  getchar();
}

int userOptions(void){
  int opc1,esc;  
  opc1 = menuMorador();
  if(opc1 == 1){
    pegarItem();
    esc = selectionStorage();
    // while ((esc != 0)&&(esc != 1)&&(esc != 2)&&(esc != 3)){
    //   esc = selectionStorage();
    // }
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
    // while ((esc != 0)&&(esc != 1)&&(esc != 2)&&(esc != 3)){
    //   esc = selectionStorage();
    // }
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
    weekGoal();
  }
  return opc1;
}

