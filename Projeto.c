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
//Interfaces
void menuSobre(void);
void menubot(void);
void menuMorador(void);


int main(void) {
    menuSobre();
    menubot();
    menuMorador();
    return 0;

}
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

void menubot(void){
  system("clear");
    printf("========================================================\n");
    printf("==               Menu Bot Control                     ==\n");
    printf("========================================================\n");
    printf("==                                                    ==\n");
    printf("==    1- Configurar                                   ==\n");
    printf("==    2- Atualizar Dados                              ==\n");
    printf("==    3- Relatório                                    ==\n");
    printf("==    4- Exibir Informações Atuais                    ==\n");
    printf("==    5- Configurar Notificações                      ==\n");
    printf("==    6- Deletar Dados                                ==\n");
    printf("==    7- Configurar Metas Dos Usuários                ==\n");
    printf("==    0- Voltar ao Menu principal                     ==\n");
    printf("========================================================\n");
  printf("\n\t→ click <ENTER> for next...\n");
  getchar();

}

void menuMorador(void){
  system("clear");
    printf("========================================================\n");
    printf("==                  Menu Morador                      ==\n");
    printf("========================================================\n");
    printf("==                                                    ==\n");
    printf("==    1- Pegar item                                   ==\n");
    printf("==    2- Descartar item                               ==\n");
    printf("==    3- Meu Relatório                                ==\n");
    printf("==    4- Exibir meus dados atuais                     ==\n");
    printf("==    5- Notificações                                 ==\n");
    printf("==    6- Atualizar dados                              ==\n");
    printf("==    7- Metas da semana                              ==\n");
    printf("==    0- Voltar ao Menu principal                     ==\n");
    printf("========================================================\n");
  printf("\n\t→ click <ENTER> for next...\n");
  getchar();

}