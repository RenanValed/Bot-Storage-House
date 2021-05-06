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

int formaData(char palavra[13]){ // 1 caso seja inválida
  //Verificar barras
  if(palavra[2] != '/' || palavra[5] != '/'){
    printf("Formato errado, tente usar: 00/00/0000\n");
    return 1;
  }
  // Verificar ano
  if(((palavra[6] != '2') && (palavra[6] != '1')) || (palavra[7] < '0') || (palavra[7] > '9' ) || (palavra[8] < '0') || (palavra[8] > '9' ) || (palavra[9] < '0') || (palavra[9] > '9' )){
    printf("\n\t Só é aceito anos entre 1000-2999\n");
    return 1;
  }
  //Verificar validade do mes
  if((palavra[4] < '0' || palavra[4] > '9' ) || (palavra[3] != '0' && palavra[3] != '1')){
    printf("\n\tMês inexistente!\n");
    return 1;
  }
  // Verificar se o numero do dia esta valido
  if(palavra[0] == '0' || palavra[0] == '1' || palavra[0] == '2'){
    if(palavra[1] > '9' || palavra[1] < '0' ){
      printf("\n\t Dia não Existe!\n");
      return 1;
    }
  }
  if (palavra[0] == '3'){
    if(!(palavra[1] != '1' || palavra[1] != '0')){
      printf("\n\t Dia não Existe!\n");
      return 1;
    }
  }
  printf("Formato da Data é válida!\n");
  return 0;
}

int bissexto(char palavra[11]){// 1 caso seja bissexto
  int num;
  char ano[5];
  for(int i = 0; i < 6; i++){
    ano[i]= palavra[6+i];
  }
  num = converterEmInteiro(ano);
  if((num % 4) == 0){
    return 1;
  }
  else if((num % 100) == 0){
    return 0;
  }
  else if((num % 400) == 0){
    return 1;
  }
  return 0;
}

int validarData(char palavra[]){ // 1 caso data seja válida
  int dia, mes;
  char let1[3],let2[3];
  for(int i = 1 ; i < 3; i++){
    let1[i-1] = palavra[i-1];
    let2[i-1] = palavra[i+2];
  }
  dia = converterEmInteiro(let1);
  mes = converterEmInteiro(let2);
  if (dia > 31 || dia == 0){
    return 0;
  }
  else if(mes > 12 || mes == 0){
    return 0;
  }
  else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
    if(dia > 30){
      return 0;
    }
  }
  else if(mes == 2 && bissexto(palavra)){
    if (dia > 29){
      return 0;
    }
  }
  else if(mes == 2){
    if(dia > 28){
      return 0;
    }
  }
  return 1;
}