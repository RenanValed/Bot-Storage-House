#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "botOperator.h"
#include "funcoes.h"
#include "moradorOperator.h"


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
  printf("==    5- Adicionar item                               ==\n"); //ok
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
  exibirTodosItens();
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",esc);
  getchar();
  validar1 = validarStringNumerica(esc);
  while(validar1 ){
    printf("\n\t¢ Opção Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",esc);
    getchar();
    validar1 = validarStringNumerica(esc);
  }
}

void storageArmario(void){
  char esc[256];
  int validar1;
  Item* itn;
  system("clear");
  printf("========================================================\n");
  printf("==                        Armário                     ==\n");
  printf("========================================================\n"); 
  exibirTodosItens();
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",esc);
  getchar();
  validar1 = validarStringNumerica(esc);
  while(validar1){
    printf("\n\t¢ Opção Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",esc);
    getchar();
    validar1 = validarStringNumerica(esc);
  }
}

void storageFreezer(void){
  char esc[256];
  int validar1;
  system("clear");
  printf("========================================================\n");
  printf("==                       Freezer                      ==\n");
  printf("========================================================\n"); 
  exibirTodosItens();
  printf("\n\t→ Digite sua opção:\n");
  scanf("%[^\n]",esc);
  getchar();
  validar1 = validarStringNumerica(esc);
  while(validar1){
    printf("\n\t¢ Opção Inválida!\n");
    printf("\n\t→ Digite sua opção:\n");
    scanf("%[^\n]",esc);
    getchar();
    validar1 = validarStringNumerica(esc);
  }
}

void pegarItem(void){
  int esc;
  system("clear");
  printf("========================================================\n");
  printf("==                      Pegar item                    ==\n");
  printf("========================================================\n");
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
  Item* itn;
  itn = (Item*) malloc(sizeof(Item));
  FILE* fp;

  printf("========================================================\n");
  printf("==                   Adicionar Item                   ==\n");
  printf("========================================================\n");
  
  printf("\n\n\tNome do item:");
  scanf("%[^\n]",itn->nome);
  getchar();
  printf("\n\tValidade do item:");
  scanf("%s",itn->validade);
  getchar();
  printf("\n\tQuantidade:");
  scanf("%d",&itn->quantidade);
  getchar();
  printf("\n\tItem é perecivel?(s/n) ");
  scanf("%c",&itn->perecivel);
  getchar();
  itn->status = True;

  fp = fopen("itens.dat","ab"); //gravação em arquivo
  if (fp == NULL){
    printf("\n\t==================================");
    printf("\n\t====  Erro ao abrir arquivo   ====");
    printf("\n\t==================================");
    sleep(3);

  }
  fwrite(itn,sizeof(Item),1,fp);
  fclose(fp);
  free(itn);

  printf("\n>>> Item Adicionado com sucesso!");
  sleep(5);
}

void gravarItem(Item* itn) { // Grava struct em arqivo binário
  FILE* fp;

  fp = fopen("itens.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(itn, sizeof(Item), 1, fp);
  fclose(fp);
}


Item* buscarItem(char* nym) { // busca Item no Arqruivo e retorna-o
  FILE* fp;
  Item* itn;

  itn = (Item*) malloc(sizeof(Item));
  fp = fopen("Itens.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(itn, sizeof(Item), 1, fp);
    if (strcmp(itn->nome, nym) == 0) {
      fclose(fp);
      return itn;
    }
  }
  fclose(fp);
  return NULL;
}


void regravarItem(Item* itn) {
	FILE* fp;
	Item* itemLido;

	itemLido = (Item*) malloc(sizeof(Item));
	fp = fopen("itens.dat", "r+b");
	if (fp == NULL) {

	}
	while(fread(itemLido, sizeof(Item), 1, fp)) {
		if (strcmp(itemLido->nome, itn->nome) == 0) {
			fseek(fp, -1*sizeof(Item), SEEK_CUR);
      fwrite(itn, sizeof(Item), 1, fp);
      printf("\n\t###  Arquivo atualizado!  ###");
      break;
		}
	}
	fclose(fp);
	free(itemLido);
}

void exibirItem(Item* itn) { //Exibe item pesquisado por usuário

  if (itn == NULL) {
    printf("\n= = = Item Inexistente = = =\n");
  } else {
    printf("\n= = = Item Cadastrado = = =\n");
    printf("Item: %s\n", itn->nome);
    printf("Quantidade: %d\n", itn->quantidade);
    printf("validade: %s\n", itn->validade);
    printf("Perecível: %c\n", itn->perecivel);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

void exibirTodosItens (void){// Exibe todos os itens do Arquivo bin
  FILE* fp;
  Item* itemLido;
  int num = 1;
  itemLido = (Item*) malloc(sizeof(Item));
  fp = fopen("itens.dat","rb");
  if (fp == NULL){
		printf("\n\t==================================");
    printf("\n\t====  Erro ao abrir arquivo   ====");
    printf("\n\t==================================");
    sleep(3);
  }

  while(fread(itemLido, sizeof(Item), 1, fp)){
    if(itemLido->status){
      printf("\n= = = %dº Item Cadastrado = = =\n",num);
      printf("Item: %s\n", itemLido->nome);
      printf("Quantidade: %d\n", itemLido->quantidade);
      printf("validade: %s\n", itemLido->validade);
      printf("Perecível: %c\n", itemLido->perecivel);
      num += 1;
    }
  }
  

  free(itemLido);
}




///////////////////////////////////////////////////
int userOptions(void){
  int opc1,esc;  
  opc1 = menuMorador();
  if(opc1 == 1){
    pegarItem();
    
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


