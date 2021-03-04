#include <stdio.h>
#include <stdlib.h>
///////////// Sobre o Bot////////////////


int menubot(void){
  int opc;
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
  scanf("%d",&opc);
  getchar();
  return opc;
}

void configBot(void){
  int qntMoradores,qntPets,qntFrutas,qntRefeicao,feirasMensais;
  char refeicaoCalorosa[8];
  system("clear");
  printf("========================================================\n");
  printf("==                  Personalizar Bot                  ==\n");
  printf("========================================================\n");
  printf("\t → Quantas pessoas moram na casa?\n");
  scanf("%d",&qntMoradores);
  getchar();
  printf("\t → Quantos animais há na casa?\n");
  scanf("%d",&qntPets);
  getchar();
  printf("\t → Quantas frutas são consumidas por dia pela casa?\n");
  scanf("%d",&qntFrutas);
  getchar();
  printf("\t → Quantas refeições são feitas ai dia?\n");
  scanf("%d",&qntRefeicao);
  getchar();
  printf("\t → Qual refeição é mais calorosa?\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",refeicaoCalorosa);
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
  return opc;
}