//
//             Universidade Federal do Rio Grande do Norte                 ===
//                 Centro de Ensino Superior do Seridó                     ===
//===               Departamento de Computação e Tecnologia                   ===
//===                  Disciplina DCT1106 -- Programação                      ===
//===                  Projeto Sistema de Gestão Escolar                      ===
//===                Developed by  @ooo.renan - Jan, 2021                    ===
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "botOperator.h"
#include "moradorOperator.h"
#include "funcoes.h"

// Inicialização
void sistemaBSH(void);
void menuSobre(void);
void menuInicial(void);
void login(void);
void cadastrarUser(void);

int main(void) {
    //menuSobre();
    int opcao,logintype,opc;
    menuInicial();
    scanf("%d",&opcao);
    getchar();

    while(opcao != 0){
      while((opcao != 0)&&(opcao != 1)&&(opcao != 2)){
        menuInicial();
        printf("\nOPÇÃO INVALIDA\n");
        scanf("%d",&opcao);
        getchar();
      }
      if (opcao == 1){
        cadastrarUser();
      }
      if(opcao == 2){
        login();
        printf("\n\n\t→ Entrar como:\n\t1 - Morador\n\t0 - Bot\n\t→ ");
        scanf("%d",&logintype);
        while((logintype != 1)&&(logintype != 0)){
          printf("\n\n\t→ Entrar como:\n\t1 - Morador\n\t0 - Bot\n\t→");
          scanf("%d",&logintype);
        }
      }
      if (logintype == 1){
        opc = userOptions() ;
        while(opc != 0){
          opc = userOptions();
        }
      }
      else if(logintype == 0){
        opc = botOptions();
        while(opc != 0){
         opc = botOptions(); 
        }
      }
      menuInicial();
      scanf("%d",&opcao);
      getchar();
    }
    printf("\n\tFim do programa");
    return 0;

}
/// System ///


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
  //char opc;
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
  //scanf("%c",&opc);
  //getchar();
  //return opc;
}

void login(){
  char user[20],pass[20];
  system("clear");
  printf("========================================================\n");
  printf("==                     Menu Login                     ==\n");
  printf("========================================================\n");
  printf("\n\t→ Insira nome de Usuário:\n");
  scanf("%[A-Za-z]",user);
  getchar();
  printf("\n\t→ Insira senha de Usuário:\n");
  scanf("%[A-Za-z0-9]",pass);
  getchar();
  ;
}

void cadastrarUser(void){
  char user[20], senha[20];
  int validar;
  system("clear");
  printf("========================================================\n");
  printf("==                Cadastrar Usuário                   ==\n");
  printf("========================================================\n\n");
  printf("\t→ Nome de Usuário: \n");
  scanf("%s",user);
  getchar();
  validar = temDigito(user);
  while (validar){
    printf("\n\t¢Não pode conter números no Usuário!\n");
    printf("\t→ Nome de Usuário: \n");
    scanf("%s",user);
    getchar();
    validar = temDigito(user);
  }

  
  printf("\t→ Senha: \n");
  scanf("%s",senha);
  getchar();
  //Usuário e senha Serão guardados em um tipo de lista ou dicionário
}
