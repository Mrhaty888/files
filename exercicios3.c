#include <stdio.h>
#include <locale.h>
#include <conio.h>

//Ex 1
/*void main(){
  setlocale(LC_ALL,"portuguese");
  char mensagem[50];
  int contador;
  printf("Digite uma mensagem: ");
  gets(mensagem);
  for(contador=1;contador<=10;contador++){
    printf("%s \n",mensagem);
  }
}*/

//Ex 2
/*void main(){
  setlocale(LC_ALL,"portuguese");
  float num, maior, menor, media;
  float soma=0;
  int contador;
  for(contador=1;contador<=10;contador++){
      printf("Digite o %d° número: ",contador);
      scanf("%f",&num);
      if (contador==1){
        maior=num;
        menor=num;
      } if (num>maior){
        maior=num;
      } if (num<menor){
        menor=num;
      }
      soma+=num;
  }
  media=soma/10;
  printf("Maior: %.2f \nMenor: %.2f \nSoma: %.2f \nMédia: %.2f",maior,menor,soma,media);
}*/

//Ex 3
  /*void main(){
  setlocale(LC_ALL,"portuguese");
  int contador;
  printf("Números pares de 1 à 100.");
  for(contador=0;contador<=100;contador+=2){
    printf(" \n %d",contador);
  }
  }*/

//Ex 4
 /*void main(){
  setlocale(LC_ALL,"portuguese");
  int contador;
  printf("Os múltiplos de 3 entre 1 e 500: ");
  for(contador=0;contador<=500;contador+=3){
    printf("\n %d",contador);
  }
  }*/

  //Ex 5
  void main(){
  setlocale(LC_ALL,"portuguese");
  int contador;
  char letra[] = {"Cinco patinhos foram passear",
"Além das montanhas",
"Para brincar",
"A mamãe gritou: Quá, quá, quá, quá",
"Mas só quatro patinhos voltaram de lá",

"Quatro patinhos foram passear",
"Além das montanhas",
"Para brincar",
"A mamãe gritou: Quá, quá, quá, quá",
"Mas só três patinhos voltaram de lá",

"Três patinhos foram passear",
"Além das montanhas",
"Para brincar",
"A mamãe gritou: Quá, quá, quá, quá",
"Mas só dois patinhos voltaram de lá",

"Dois patinhos foram passear",
"Além das montanhas",
    "Para brincar",
    "A mamãe gritou: Quá, quá, quá, quá",
    "Mas só um patinho voltou de lá",

    "Um patinho foi passear",
    "Além das montanhas",
    "Para brincar",
    "A mamãe gritou: Quá, quá, quá, quá",
    "Mas nenhum patinho voltou de lá",

    "A mamãe patinha foi procurar",
    "Além das montanhas",
    "Na beira do mar",
    "A mamãe gritou: Quá, quá, quá, quá",
    "E os cinco patinhos voltaram de lá"};

  for(contador=0;contador>(sizeof(letra)/4)
  }


