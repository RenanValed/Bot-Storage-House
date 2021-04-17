//Verifica se tem digito na string e exibe que não pode conter
#include <string.h>
#include <stdio.h>



int converterEmInteiro(char palavra[]){ //converte o vetor char, para inteiro
  int convertido;
  convertido = atoi(palavra); //Tirado do stackoverflow
  return convertido;
}

int tamanhoZero(char opc[]){ //retorna 1 caso vetor esteja vazio
  int tam;
  tam = strlen(opc);
  if (tam == 0) {
    printf("\n\t¢ Usuario não digitou nada!");
    return 1;
  }
  return 0;
}

int temDigito(char palavra[]) { //retorna 1 se houver numeros no vetor
  char letra;
  int tam;
  tam = tamanhoZero(palavra);
  if (tam) {
    return 0;
  }
  tam = strlen(palavra);
  for (int num = 0; num < tam;num++){
    letra = palavra[num];
    if (letra >= '0' && letra <='9') {
      return 1;
    }
  }
  return 0;
}

int temLetra(char palavra[]){ // retorna 1 se houver letra no vetor
  char letra;
  int tam;
  tam = tamanhoZero(palavra);
  if (tam) {
    return 0;
  }
  tam = strlen(palavra);
  for (int num = 0; num < tam;num++){
    letra = palavra[num];
    if ((letra >= 'a' && letra <='z')||(letra >= 'A' && letra <='Z')) {
      return 1;
    }
  }
  return 0;
}

int temEspaco(char palavra[]){ // Retorna 1 se houver espaço no vetor
  char letra;
  int tam;
  tam = tamanhoZero(palavra);
  if (tam) {
    return 0;
  }
  tam = strlen(palavra);
  for (int i = 0; i < tam;i++){
    letra = palavra[i];
    if (letra == ' '){
      return 1;
    }
  }
  
  return 0;
}

int validarMinuscula(char palavra[]) { // retorna 1 se todos os elementos forem minusculas
  int tam; 
  tam = tamanhoZero(palavra);
  if (tam) {
    return 0;
  }
  tam = strlen(palavra);
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

int validarMaiuscula(char palavra[]) { // retorna 1 se todos os elementos forem maiusculas
  int tam;
  tam = tamanhoZero(palavra);
  if (tam) {
    return 0;
  }
  tam = strlen(palavra);
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


int verificarASCII_invalida(char palavra[]){ // retorna 1 se houver algum caracter diferente de : letras, numeros e espaço
  int tam;
  tam = tamanhoZero(palavra);
  if (tam) {
    return 0;
  }
  if(!validarMinuscula(palavra) && !validarMaiuscula(palavra) && !temDigito(palavra) && !temEspaco(palavra)){
    printf("\n\t¢ Você usou um caracter inválido!(Acentuação ou Pontuação)\n");
    return 1;
  }
  return 0;
}

int validarMenu(int opc,int minimo,int maximo){ // retorna 0 cajo entrada esteja nos limites numericos do menu
  if (opc < minimo || opc > maximo){
    printf("\n\t¢ Número não pertence ás opcões!\n");
    return 1;
  }
  else{
    return 0;
  }
  
}

int validarStringNumerica(char opc[]){ // retorna 1 se conter qualquer caractere diferente de um numero
  int validar1; 
  int validar2;
  int validar3;
  validar1 = temLetra(opc); 
  validar2 = temEspaco(opc);
  validar3 = verificarASCII_invalida(opc);
  int tam;
  tam = tamanhoZero(opc);
  if (tam) {
    return 0;
  }
  if (validar1 || validar2 || validar3){
    if (validar1){
      printf("\n\t¢ Você usou letras!");
    }
    if(validar2){
      printf("\n\t¢ Você usou espaco!");
    }
    return 1;
  }
  return 0;
}

int validarPalavra(char palavra[]){ // retorna 1 caso não seja apenas letras
  int validar1,validar2;
  validar1 = verificarASCII_invalida(palavra);
  validar2 = temDigito(palavra);
  if (validar1 || validar2){
    return 1;
  }
  return 0;
}

