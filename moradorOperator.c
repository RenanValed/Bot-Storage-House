#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "funcoes.h"
#include "moradorOperator.h"


//fazer separação de estoques
//criar arquivo para usuários
// deletar menu bot


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
  printf("==    3- Exibir estoque completo                      ==\n"); //ok
  printf("==    4- Relatório da Casa                            ==\n"); //
  printf("==    5- Adicionar item                               ==\n"); //
  printf("==    0- Encerrar                                     ==\n"); 
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

int storageGeladeira(char tipo){
  char esc[256];
  int validar1;
  int n = 1,m = 0;
  FILE *fp;
  Item *itemLido;
  itemLido = (Item*) malloc(sizeof(Item));
  system("clear");
  printf("========================================================\n");
  printf("==                      Geladeira                     ==\n");
  printf("========================================================\n"); 
  fp = fopen("itens.dat","rb");
  if(fp == NULL){
    printf("\nArquivo Criado");
    fp = fopen("itens.dat","wb");
  }
  else{
    while(fread(itemLido, sizeof(Item), 1, fp)){
      if(itemLido->status){
        if(itemLido->local == 'g'){
          printf("\n= = = %dº Item Cadastrado = = =\n",n);
          printf("Item: %s\n", itemLido->nome);
          printf("Quantidade: %d\n", itemLido->quantidade);
          printf("validade: %s\n", itemLido->validade);
          printf("Perecível: ");
          if(itemLido->perecivel == 's'){
            printf("Sim\n");
          }
          else{
            printf("Não\n");
          }
          printf("Local: Geladeira\n");
          n += 1;
          m +=1;
        }
      }
    }  
  }
  if((m ==0)&&(n == 1)){
    printf("\nNão há itens nesse local!");
    return 0;
    }
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
  int num = converterEmInteiro(esc);
  int x, achou = 1;
  free(itemLido);
  itemLido = (Item*) malloc(sizeof(Item));
  fclose(fp);
  fp = fopen("itens.dat","rb");
  while(fread(itemLido, sizeof(Item), 1, fp)){
    if (itemLido->status == 1 && itemLido->local == 'g'){
      if (achou == num){
        if (tela_acabouItem(itemLido)){
          break;
        }
        if(tipo == 'p'){
          x = itemLido->quantidade;
          itemLido->quantidade = x - 1;
        }
        else if(tipo == 'd'){
          itemLido->status = False;
        }
        regravarItem(itemLido);
      }
      achou +=1;
    }
  }
  free(itemLido);
  fclose(fp);
  return num;
}

int storageArmario(char tipo){
  char esc[256];
  int validar1;
  int n = 1,m = 0;
  FILE *fp;
  Item *itemLido;
  itemLido = (Item*) malloc(sizeof(Item));
  system("clear");
  printf("========================================================\n");
  printf("==                        Armário                     ==\n");
  printf("========================================================\n"); 
  
  fp = fopen("itens.dat","rb");
  if(fp == NULL){
    printf("\nArquivo Criado");
    fp = fopen("itens.dat","wb");
  }
  else{
    while(fread(itemLido, sizeof(Item), 1, fp)){
      if((itemLido->local == 'a') && (itemLido->status)){
        printf("\n= = = %dº Item Cadastrado = = =\n",n);
        printf("Item: %s\n", itemLido->nome);
        printf("Quantidade: %d\n", itemLido->quantidade);
        printf("validade: %s\n", itemLido->validade);
        printf("Perecível: ");
        if(itemLido->perecivel == 's'){
          printf("Sim\n");
        }
        else{
          printf("Não\n");
        }
        printf("Local: Armário\n");
        n +=1;
        m +=1;
      }
    }     
  }
  if((m ==0)&&(n == 1)){
      printf("\nNão há itens nesse local!");
      return 0;
    }
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
  int num = converterEmInteiro(esc);
  int x, achou = 1;
  free(itemLido);
  itemLido = (Item*) malloc(sizeof(Item));
  fclose(fp);
  fp = fopen("itens.dat","rb");
  while(fread(itemLido, sizeof(Item), 1, fp)){
    if (itemLido->status == 1 && itemLido->local == 'a'){
      if (achou == num){
        if (tela_acabouItem(itemLido)){
          break;
        }
        if(tipo == 'p'){  
          x = itemLido->quantidade;
          itemLido->quantidade = x - 1;
        }
        else if(tipo == 'd'){
          itemLido->status = False;
        }
        regravarItem(itemLido);
      }
      achou +=1;
    }
  }
  free(itemLido);
  fclose(fp);
  return num;
}

int storageFreezer(char tipo){
  char esc[256];
  int validar1;
  int n = 1,achou = 1,x,m = 0;
  FILE *fp;
  Item *itemLido;
  itemLido = (Item*) malloc(sizeof(Item));
  system("clear");
  printf("========================================================\n");
  printf("==                       Freezer                      ==\n");
  printf("========================================================\n"); 
  fp = fopen("itens.dat","rb");
  if(fp == NULL){
    printf("\nArquivo Criado");
    fp = fopen("itens.dat","wb");
  }
  else{
    while(fread(itemLido, sizeof(Item), 1, fp)){
      if((itemLido->status) &&(itemLido->local == 'f')){
        printf("\n= = = %dº Item Cadastrado = = =\n",n);
        printf("Item: %s\n", itemLido->nome);
        printf("Quantidade: %d\n", itemLido->quantidade);
        printf("validade: %s\n", itemLido->validade);
        printf("Perecível: ");
        if(itemLido->perecivel == 's'){
          printf("Sim\n");
        }
        else{
          printf("Não\n");
        }
        printf("Local: Freezer\n");
        n +=1;
        m +=1;
      }
    }
  }  
  if((m ==0)&&(n == 1)){
      printf("\nNão há itens nesse local!");
    }
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
  int num = converterEmInteiro(esc);
  ////////////
  free(itemLido);
  itemLido = (Item*) malloc(sizeof(Item));
  fclose(fp);
  fp = fopen("itens.dat","rb");

  while(fread(itemLido, sizeof(Item), 1, fp)){
    if (itemLido->status == 1 && itemLido->local == 'f'){
      if (achou == num){
        if (tela_acabouItem(itemLido)){
          break;
        }
        if(tipo == 'p'){
          x = itemLido->quantidade;
          itemLido->quantidade = x - 1;
        }
        else if(tipo == 'd'){
          itemLido->status = False;
        }
        regravarItem(itemLido);
      }
      achou +=1;
    }
  }
  free(itemLido);
  fclose(fp);
  return num;
}

void pegarItem(void){
  int esc, num,x,achou = 1,n;
  char tipo = 'p';
  Item* itn;
  FILE* fp;
  fp = fopen("itens.dat","r+b");
  itn = (Item*) malloc(sizeof(Item));

  system("clear");
  printf("========================================================\n");
  printf("==                      Pegar item                    ==\n");
  printf("========================================================\n");
  esc = selectionStorage();

  if(esc == 1){
    num = storageGeladeira(tipo);
  }
  if(esc == 2){
    num = storageArmario(tipo);
  }
  if(esc == 3){
    num = storageFreezer(tipo);
  }
  free(itn);
  fclose(fp);
}

void descarte(void){
  system("clear");
  int esc,num,achou = 1;
  char tipo = 'd';
  FILE* fp;
  Item* itn;
  itn = (Item*) malloc(sizeof(Item));
  fp = fopen("itens.dat","r+b");
  printf("========================================================\n");
  printf("==                  Descartar item                    ==\n");
  printf("========================================================\n");
  esc = selectionStorage();

  if(esc == 1){
    num = storageGeladeira(tipo);
  }
  if(esc == 2){
    num = storageArmario(tipo);
  }
  if(esc == 3){
    num = storageFreezer(tipo);
  }
  free(itn);
  fclose(fp);
}

void exibirEstoque(void){
  system("clear");
  printf("========================================================\n");
  printf("==                Todos Itens disponíveis             ==\n");
  printf("========================================================\n");
  exibirTodosItens();
  printf("\n\n\t\033[0;32m>>Click Enter...\033[0m");
  getchar();
}

void adicionarItem(void){
  system("clear");
  char vet[11];
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
  do{
    scanf("%s",vet);
    getchar();
  }while(formaData(vet) || !validarData(vet));
  strcpy(itn->validade,vet);
  printf("\n\tQuantidade:");
  scanf("%d",&itn->quantidade);
  getchar();
  itn->quantidadeE = itn->quantidade;
  printf("\n\tItem é perecivel?(s/n) ");
  scanf("%c",&itn->perecivel);
  getchar();
  printf("\n\t-- Geladeira - g\n\t-- Freezer - f\n\t-- Armario - a\nLocal onde vai ficar o item:");
  scanf("%c",&itn->local);
  getchar();
  itn->status = True;

  fp = fopen("itens.dat","ab"); //gravação em arquivo
  if (fp == NULL){
    printf("\n\t==================================");
    printf("\n\t====  Erro ao abrir arquivo   ====");
    printf("\n\t==================================");
    sleep(2);

  }
  fwrite(itn,sizeof(Item),1,fp);
  fclose(fp);
  free(itn);

  printf("\n>>> Item Adicionado com sucesso!\n");
}

int tela_acabouItem(Item* itn){
  if(itn->quantidade == 0){
    printf("Item acabou no estoque!");
    sleep(3);
    system("clear");
    return 1;
  }
  return 0;
}

void gravarItem(Item* itn) { // Grava struct em arquivo binário
  FILE* fp;

  fp = fopen("itens.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Criei um novo arquivo para prosseguir :D\n");
    fp = fopen("itens.dat","wb");
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
    printf("\nProblemas para atualizar arquivo\n");
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
    fp = fopen("itens.dat","wb");
    printf("\nArquivo Criado com sucesso!");
  }
  else{
    while(fread(itemLido, sizeof(Item), 1, fp)){
      if(itemLido->status){
        printf("\n= = = %dº Item Cadastrado = = =\n",num);
        printf("Item: %s\n", itemLido->nome);
        printf("Quantidade: %d\n", itemLido->quantidade);
        printf("validade: %s\n", itemLido->validade);
        printf("Perecível: ");
        if(itemLido->perecivel == 's'){
          printf("Sim\n");
        }
        else{
          printf("Não\n");
        }
        printf("Local: ");
        if(itemLido->local == 'a'){
          printf("Armário\n");
        }
        else if(itemLido->local == 'g'){
          printf("Geladeira\n");
        }
        else if(itemLido->local == 'f'){
          printf("Freezer\n");
        }
        else{
          printf("Não definido");
        }
        num += 1;
      }
    }
  }
  
  fclose(fp);
  free(itemLido);
}



void relatorioGeral(void){
  system("clear");
  FILE* fp;
  Item* itn;
  itn = (Item*)malloc(sizeof(Item));
  fp = fopen("itens.dat","rb");
  if (fp == NULL){
    fp = fopen("itens.dat","wb");
  }
  printf("\t\t========================================================\n");
  printf("\t\t==                    Relatório Geral                 ==\n");
  printf("\t\t========================================================\n");
  while (fread(itn,sizeof(Item),1,fp)){
    if(itn->status){
      printf("==    Foram consumidos \033[2;32m%d\033[0m do item \033[2;32m%s\033[0m que iniciou com \033[2;32m%d\033[0m de calidade até \033[2;32m%s\033[0m\n",(itn->quantidadeE - itn->quantidade),itn->nome,itn->quantidadeE,itn->validade);
    }
  }
  printf("========================================================\n");
  printf("\n\n\t\033[1;32m>>Click Enter...\033[0m");
  getchar();
  fclose(fp);
  fp= fopen("itens.dat","rb");
  while (fread(itn,sizeof(Item),1,fp)){
    if(!itn->status){
      printf("==    Foram descatados \033[1;31m%d\033[0m do item \033[1;31m%s\033[0m que iniciou com \033[1;31m%d\033[0m de calidade até \033[1;31m%s\033[0m\n",itn->quantidade,itn->nome,itn->quantidadeE,itn->validade);
    }
  }
  printf("\n\n\t\033[1;32m>>Click Enter...\033[0m");
  getchar();
  free(itn);
  fclose(fp);
}

///////////////////////////////////////////////////
int userOptions(void){
  int opc1;  
  opc1 = menuMorador();
  if(opc1 == 1){
    pegarItem();
    
  }
  if(opc1 == 2){
    descarte(); 
  }

  if(opc1 == 3){
    exibirEstoque();
  }
  if(opc1 == 4){
    relatorioGeral(); 
  }
  if(opc1 == 5){
    adicionarItem();
  }
  return opc1;
}


