//Verifica se tem digito na string e exibe que não pode conter
#include <string.h>
#include <stdio.h>


int converterEmInteiro(char palavra[]){
  int convertido;
  convertido = atoi(palavra); //Tirado do stackoverflow
  printf("valor convertido: %d\n", convertido);
  return convertido;
}

int temDigito(char palavra[]) {
  char letra;
  int tam;
  tam = strlen(palavra);
  if (tam == 0) {
    return 0;
  }
  for (int num = 0; num < tam;num++){
    letra = palavra[num];
    if (letra >= '0' && letra <='9') {
      return 1;
    }
  }
  return 0;
}

int temLetra(char palavra[]){
    char letra;
  int tam;
  tam = strlen(palavra);
  if (tam == 0) {
    return 0;
  }
  for (int num = 0; num < tam;num++){
    letra = palavra[num];
    if ((letra >= 'a' && letra <='z')||(letra >= 'A' && letra <='Z')) {
      return 1;
    }
  }
  return 0;
}

int temEspaco(char palavra[]){
  char letra;
  int tam;
  tam = strlen(palavra);
  if (tam == 0) {
    return 0;
  }
  for (int i = 0; i < tam;i++){
    letra = palavra[i];
    if (letra == ' '){
      return 1;
    }
  }
  
  return 0;
}

int validarMinuscula(char palavra[]) {
  int tam;
  tam = strlen(palavra);
  if (tam == 0) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (palavra[i] >= 'a' && palavra[i] <= 'z') {
      continue;
    }
    else{
      return 0;
    }
  }
  return 1;
}

int validarMaiuscula(char palavra[]) {
  int tam;
  tam = strlen(palavra);
  if (tam == 0) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
      continue;
    }
    else{
      return 0;
    }
  }
  return 1;
}


int verificarASCII_invalida(char palavra[]){
  if(!validarMinuscula(palavra) && !validarMaiuscula(palavra) && !temDigito(palavra) && !temEspaco(palavra)){
    printf("\n\t¢ Você usou um caracter inválido!(Acentuação ou Pontuação)\n");
    return 1;
  }
  return 0;
}

int validarMenu(int opc,int minimo,int maximo){
  if (opc < minimo || opc > maximo){
    return 1;
  }
  else{
    return 0;
  }
  
}