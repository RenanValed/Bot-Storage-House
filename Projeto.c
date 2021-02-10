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
char menuInicial(void);
void cadastrarUser(void);

void userOptions(void);
char menuMorador(void);
char selectionStorage(void);
void pegarItem(void);
void descarte(void);
char storageArmario(void);
char storageGeladeira(void);
char storageFreezer(void);
void weekGoal(void);
void relatorioPessoal(void);

void botOptions(void);
char menubot(void);
char menuConfigBot(void);
void configPadrao(void);
char atualizarBot(void);
void exibirDados(void);
void relatorioGeral(void);
char deletarDadosBot(void);


int main(void) {
    menuSobre();
    menuInicial();
    cadastrarUser();
    botOptions();
    userOptions();
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

char menuInicial(void){
  char opc;
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
  scanf("%c",&opc);
  getchar();
  return opc;
}

void cadastrarUser(void){
  char user,pass;
  system("clear");
  printf("========================================================\n");
  printf("==                Cadastrar Usuário                   ==\n");
  printf("========================================================\n\n");
  printf("\t→ Nome de Usuário: \n");
  scanf("%[A-ZÇa-zç]",&user);
  printf("\t→ Senha: \n");
  scanf("%[A-ZÇa-zç0-9]",&pass);
  getchar();
  //Usuário e senha Serão guardados em um tipo de lista ou dicionário
}

///////////// Sobre o Bot////////////////
void botOptions(void){
  menubot();
  menuConfigBot();
  configPadrao();
  atualizarBot();
  exibirDados();
  relatorioGeral();
  deletarDadosBot();
}

char menubot(void){
  char opc;
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
  scanf("%c",&opc);
  getchar();
  return opc;
}

char menuConfigBot(void){
  char opc;
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
  printf("\n\t→ Digite sua opção:\n");
  scanf("%c",&opc);
  getchar();
  return opc;

}

void configPadrao(void){
  int qntMoradores,qntPets,qntFrutas,qntRefeicao,feirasMensais;
  char tipoComida[30],refeicaoCalorosa[8];
  system("clear");
  printf("========================================================\n");
  printf("==                  Personalizar Bot                  ==\n");
  printf("========================================================\n");
  printf("\t → Quantas pessoas moram na casa?\n");
  scanf("%d",&qntMoradores);
  printf("\t → Quantos animais há na casa?\n");
  scanf("%d",&qntPets);
  printf("\t → Quantas frutas são consumidas por dia pela casa?\n");
  scanf("%d",&qntFrutas);
  printf("\t → Quantas refeições são feitas ai dia?\n");
  scanf("%d",&qntRefeicao);
  printf("\t → Qual o tipo de comida mais consumida?\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",tipoComida);
  printf("\t → Qual refeição é mais calorosa?\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",refeicaoCalorosa);
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
  printf("\n\t *Será exibido os dados Gerais, tais como: entradas, saidas, sobras e dicas para economizar no próximo mês*");
  getchar();
}

char deletarDadosBot(void){
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

//////////////// Sobre o morador ///////////////
void userOptions(void){
    menuMorador();
    pegarItem();
    descarte();
    selectionStorage();
    storageArmario();
    storageFreezer();
    storageGeladeira();
    relatorioGeral();
    weekGoal();
}

char menuMorador(void){
  char opc;
  system("clear");
    printf("========================================================\n");
    printf("==                  Menu Morador                      ==\n");
    printf("========================================================\n");
    printf("==                                                    ==\n");
    printf("==    1- Pegar item                                   ==\n"); //ok
    printf("==    2- Descartar item                               ==\n"); //ok
    printf("==    3- Meu Relatório                                ==\n"); //ok
    printf("==    4- Relatório da Casa                            ==\n"); //ok
    printf("==    6- Metas da semana                              ==\n"); //
    printf("==    0- Voltar ao Menu principal                     ==\n"); 
    printf("========================================================\n"); 
  printf("\n\t→ Digite sua opção:\n");
  scanf("%c",&opc);
  getchar();
  return opc;
}

char selectionStorage(void){
  char opc;
  system("clear");
  printf("========================================================\n");
  printf("==                  Selection storage                 ==\n");
  printf("========================================================\n");
  printf("==    1- Geladeira              2- Armário            ==\n");
  printf("==    3- Freezer                0- Sair               ==\n");
  printf("========================================================\n");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%c",&opc);
  getchar();
  return opc;
}

char storageGeladeira(void){
  char opc;
  system("clear");
  printf("========================================================\n");
  printf("==                      Geladeira                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%c",&opc);
  getchar();
  return opc;
}

char storageArmario(void){
  char opc;
  system("clear");
  printf("========================================================\n");
  printf("==                        Armário                     ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%c",&opc);
  getchar();
  return opc;
}

char storageFreezer(void){
  char opc;
  system("clear");
  printf("========================================================\n");
  printf("==                       Freezer                      ==\n");
  printf("========================================================\n"); 
  printf(" \n\t*lista com todos os itens do estoque*");
  printf("\n\t→ Digite sua opção:\n");
  scanf("%c",&opc);
  getchar();
  return opc;
}

void pegarItem(void){
  system("clear");
  printf("========================================================\n");
  printf("==                      Pegar item                    ==\n");
  printf("========================================================\n");
  selectionStorage();

}

void descarte(void){
  system("clear");
  printf("========================================================\n");
  printf("==                  Descartar item                    ==\n");
  printf("========================================================\n");
  selectionStorage();
}

void relatorioPessoal(void){
  system("clear");
  printf("========================================================\n");
  printf("==                  Relatório Pessoal                 ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados do Individo, tais como: entradas, saidas, descartes");
  getchar();
}

void weekGoal(void){
  system("clear");
  printf("========================================================\n");
  printf("==                   Metas da Semana                  ==\n");
  printf("========================================================\n");
  printf("\n\t *Será exibido os dados do Individo, tais como: o que aconteceu durante a semana passada e será inibido uma meta, pelo bot, assim como também o usuário poderá criar as própias metas.");
  getchar();
}