//Verifica se tem digito na string
#include <string.h>
int temDigito(char palavra[]) {
  char letra;
  for (int num = 0; num < strlen(palavra);num++){
    letra = palavra[num];
    if (letra >= '0' && letra <='9') {
      return 1;
    }
  }
  return 0;
  }

int temEspaco(char palavra[]){
  char letra
  for (int i = 0; i < strlen(palavra);i++){
    letra = palavra[i];
    if (letra == ' '){
      return 1
    }
  }
  return 0
}