int userOptions(void);
int menuMorador(void);
int selectionStorage(void);
void pegarItem(void);
void descarte(void);
int storageArmario(char);
int storageGeladeira(char);
int storageFreezer(char);
void adicionarItem(void);
void exibirEstoque(void);
void relatorioGeral(void);



struct item_estrutura{
  char nome[81];
  char validade[11];
  int quantidade;
  char perecivel;
  int quantidadeE;
  char local;
  int status;
};

typedef struct item_estrutura Item;

int tela_acabouItem(Item*);
// Funçoes para Arquivo binário
void gravarItem(Item*);
Item* buscarItem(char*);
void exibirItem(Item*);
void regravarItem(Item*);
void exibirTodosItens (void);

