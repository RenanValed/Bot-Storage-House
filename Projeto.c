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

// Inicialização
void menuSobre(void);

void menuMorador(void);
void pegarItem(void);
void storageArmario(void);
void storageGeladeira(void);
void storageFreezer(void);

void menubot(void);
void menuConfigBot(void);
void configPadrao(void);
void atualizarBot(void);
void exibirDados(void);


int main(void) {
    menuSobre();
    menubot();
    menuMorador();
    menuConfigBot();
    configPadrao();
    atualizarBot();
    exibirDados();
    pegarItem();
    storageArmario();
    storageFreezer();
    storageGeladeira();
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


///////////// Sobre o Bot////////////////
void menubot(void){
  system("clear");
  printf("========================================================\n");
  printf("==               Menu Bot Control                     ==\n");
  printf("========================================================\n");
  printf("==                                                    ==\n");
  printf("==    1- Configurar                                   ==\n"); //ok
  printf("==    2- Atualizar Dados                              ==\n"); //ok
  printf("==    3- Relatório                                    ==\n"); //
  printf("==    4- Exibir Informações Atuais                    ==\n"); //ok
  printf("==    5- Deletar Dados                                ==\n"); //
  printf("==    0- Voltar ao Menu principal                     ==\n"); 
  printf("========================================================\n");
  printf("\n\t→ click <ENTER> for next...\n");
  getchar();

}

void menuConfigBot(void){
  system("clear");
  printf("========================================================\n");
  printf("==              Menu Configuration BHS                ==\n");
  printf("========================================================\n");
  printf("==    → Serão Feitas algumas perguntas pessoais       ==\n");
  printf("==                                                    ==\n");
  printf("==    → Deseja Seguir com a personalização ou dese-   ==\n");
  printf("==  ja usar configurações já definidas?               ==\n");
  printf("==                                                    ==\n");
  printf("==    1- Personalizar        2- Escolher Padrão       ==\n");
  printf("========================================================\n");
  printf("\n\t→ click <ENTER> for next...\n");
  getchar();

}

void configPadrao(void){
  system("clear");
  printf("========================================================\n");
  printf("==                  Personalizar Bot                  ==\n");
  printf("========================================================\n");
  printf("\t → Quantas pessoas moram na casa?\n");
  getchar();
  printf("\t → Quantos animais há na casa?\n");
  getchar();
  printf("\t → Quantos Litros de água são consumidos por todos na casa?\n");
  getchar();
  printf("\t → Quantas frutas são consumidas por dia pela casa?\n");
  getchar();
  printf("\t → Quantas refeições são feitas ai dia?\n");
  getchar();
  printf("\t → Qual o tipo de comida mais consumida?\n");
  getchar();
  printf("\t → Qual refeição é mais calorosa?\n");
  getchar();
  printf("\t → Quantas feiras são feitas ao mes?\n");
  getchar();
  printf("\t → Quantos compartimentos tem a casa?\n");
  getchar();
}

void atualizarBot(void){
  system("clear");
  printf("========================================================\n");
  printf("==                   Atualizar Bot                    ==\n");
  printf("========================================================\n");
  printf(" \n\t*Será exibido todos os dados Atuais*");
  printf(" \n\t→ Qual opção quer atualizar?");
  getchar();
}

void exibirDados(void){
    system("clear");
  printf("========================================================\n");
  printf("==             Dados Cadastrados no Bot               ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados atuais*");
  getchar();
}

//////////////// Sobre o morador ///////////////

void menuMorador(void){
  system("clear");
    printf("========================================================\n");
    printf("==                  Menu Morador                      ==\n");
    printf("========================================================\n");
    printf("==                                                    ==\n");
    printf("==    1- Pegar item                                   ==\n"); //ok
    printf("==    2- Descartar item                               ==\n"); //
    printf("==    3- Meu Relatório                                ==\n"); //
    printf("==    4- Exibir meus dados Pessoais atuais            ==\n"); //
    printf("==    5- Relatório da Casa                            ==\n"); //
    printf("==    6- Atualizar dados                              ==\n"); //
    printf("==    7- Metas da semana                              ==\n"); //
    printf("==    0- Voltar ao Menu principal                     ==\n"); 
    printf("========================================================\n"); 
  printf("\n\t→ click <ENTER> for next...\n");
  getchar();

}

void pegarItem(void){
  system("clear");
  printf("========================================================\n");
  printf("==                      Pegar Item                    ==\n");
  printf("========================================================\n");
  printf("==    1- Geladeira              2- Armário            ==\n");
  printf("==    3- Freezer                0- Sair               ==\n");
  printf("========================================================\n");
  getchar();
}

void storageGeladeira(void){
  system("clear");
  printf("========================================================\n");
  printf("==                      Geladeira                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*lista com todos os itens do estoque*");
  getchar();
}

void storageArmario(void){
  system("clear");
  printf("========================================================\n");
  printf("==                        Armário                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*lista com todos os itens do estoque*");
  getchar();
}

void storageFreezer(void){
  system("clear");
  printf("========================================================\n");
  printf("==                       Freezer                      ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*lista com todos os itens do estoque*");
  getchar();
}

