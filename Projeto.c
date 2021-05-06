//
//             Universidade Federal do Rio Grande do Norte                 ===
//                 Centro de Ensino Superior do Seridó                     ===
//===               Departamento de Computação e Tecnologia                   ===
//===                  Disciplina DCT1106 -- Programação                      ===
//===                  Projeto Sistema de Gestão Escolar                      ===
//===                Developed by  @ooo.renan - 22 Jan, 2021                    ===
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "moradorOperator.h"
#include "funcoes.h"

// Inicialização
void menuSobre(void);
void menuInicial(void);
void login(void);
void cadastrarUser(void);

///////////////////////////////////////

int main(void) {
  int opc;
  do{
    opc = userOptions();   
  }while(opc != 0);
  printf("\n\tFim do programa");
  return 0;

}

/// Start ///
void menuSobre(void) {
    printf("================================================================================\n");
    printf("===                                                                         ===\n");
    printf("=== CCCCC   CCCCC  CC   CC        C       C   C  CC    C  CCC    CCCCC      ===\n");
    printf("=== C   C   C      C C C C         C     C    C  C C   C  C  C   C   C      ===\n");
    printf("=== CCCC    CCC    C  C  C  CCCC    C   C     C  C  C  C  C   C  C   C      ===\n");
    printf("=== C   C   C      C     C           C C      C  C   C C  C  C   C   C      ===\n");
    printf("=== CCCC    CCCCC  C     C            C       C  C    CC  CCC    CCCCC      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n\n");
    sleep(1);
    system("clear");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===             Universidade Federal do Rio Grande do Norte                 ===\n");
    printf("===                 Centro de Ensino Superior do Seridó                     ===\n");
    printf("===               Departamento de Computação e Tecnologia                   ===\n");
    printf("===                  Disciplina DCT1106 -- Programação                      ===\n");
    printf("===                  Projeto Sistema de Gestão Escolar                      ===\n");
    printf("===                Developed by  @ooo.renan - Jan, 2021                     ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    sleep(4);
    system("clear");
    printf("===============================================================================\n");
    printf("===                  = = = = =  Bot Storage House  = = = = =                ===\n");
    printf("===                                                                         ===\n");
    printf("===    Este bot tem como função monitorar o armazenamento de alimentos e    ===\n");
    printf("===  Produtos, afim de promover economia e melhorar os hábitos alimentícios ===\n");
    printf("===============================================================================\n");
  printf("\n\t→ click <ENTER> for next...\n");
  getchar();
}

void menuInicial(void){
  system("clear");
  printf("========================================================\n");
  printf("==                   Menu Inicial                     ==\n");
  printf("========================================================\n");
  printf("==                                                    ==\n");
  printf("==    1- Cadastrar                                    ==\n"); 
  printf("==    2- Logar                                        ==\n"); 
  printf("==    0- Sair                                         ==\n"); 
  printf("========================================================\n");
  printf("\n\t→ Sua opção:\n");
}

void login(){
  char user[20],pass[20];
  int validar1,validar2,validar3;
  system("clear");
  printf("========================================================\n");
  printf("==                     Menu Login                     ==\n");
  printf("========================================================\n");
  printf("\n\t→ Insira nome de Usuário:\n");
  scanf("%[^\n]",user);
  getchar();
  validar1 = temDigito(user);
  validar2 = temEspaco(user);
  validar3 = verificarASCII_invalida(user);
  while (validar1 || validar2 || validar3){
    if (validar1){
      printf("\n\t¢ Não pode conter números!\n");
    }
    if(validar2){
      printf("\n\t¢ Não pode conter Espaços!\n");
    }
    printf("\n\n\t→ Insira nome de Usuário:\n");
    scanf("%[^\n]",user);
    getchar();
    validar1 = temDigito(user);
    validar2 = temEspaco(user);
    validar3 = verificarASCII_invalida(user);
  }

  printf("\n\t→ Insira senha de Usuário:\n");
  scanf("%[^\n]",pass);
  getchar();
  validar2 = temEspaco(pass);
  validar3 = verificarASCII_invalida(pass);
  while (validar2 || validar3){
    if(validar2){
      printf("\n\t¢ Não pode conter Espaços!\n");
    }
    printf("\n\n\t→ Insira SENHA de Usuário:\n");
    scanf("%[^\n]",pass);
    getchar();
    validar1 = temDigito(pass);
    validar2 = temEspaco(pass);
  }
}

void cadastrarUser(void){
  char user[20], senha[20];
  int validar, validar2,validar3;
  system("clear");
  printf("========================================================\n");
  printf("==                Cadastrar Usuário                   ==\n");
  printf("========================================================\n\n");
  printf("\t→ Nome de Usuário: \n");
  scanf("%[^\n]",user);
  getchar();
  validar = temDigito(user);
  validar2 = temEspaco(user);
  validar3 = verificarASCII_invalida(user);
  while (validar || validar2 || validar3) {
    if (validar){
      printf("\n\t¢ Não pode conter números!\n");
    }
    if(validar2){
      printf("\n\t¢ Não pode conter Espaços!\n");
    }
    printf("\n\t→ Nome de Usuário: \n");
    scanf("%[^\n]",user);
    getchar();
    validar = temDigito(user);
    validar2 = temEspaco(user);
    validar3 = verificarASCII_invalida(user);
  }
  
  printf("\t→ Senha: \n");
  scanf("%[^\n]",senha);
  getchar();
  validar = temEspaco(senha);
  validar3 = verificarASCII_invalida(senha);
  while (validar || validar3){
    if (validar){
      printf("\n\t¢ Não pode conter Espaços!\n");
    }
    printf("\t→ Senha: \n");
    scanf("%[^\n]",senha);
    getchar();
    validar = temEspaco(senha);
    validar3 = verificarASCII_invalida(senha);
  }
  printf("\n\n\tUsuário Cadastrado com Sucesso!!\n");
  sleep(2);
  //Usuário e senha Serão guardados em um tipo de lista ou dicionário
}
