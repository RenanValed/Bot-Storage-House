int userOptions(void);
int menuMorador(void);
int selectionStorage(void);
void pegarItem(void);
void descarte(void);
int storageArmario(void);
int storageGeladeira(void);
int storageFreezer(void);
void adicionarItem(void);
void relatorioPessoal(void);

struct item_estrutura{
  char nome[81];
  char validade[10];
  int quantidade;
  char perecivel;
  int status;
};

typedef struct item_estrutura Item;
// Funçoes para Arquivo binário
void gravarItem(Item*);
Item* buscarItem(char*);
void exibirItem(Item*);
void regravarItem(Item*);
void exibirTodosItens (void);

