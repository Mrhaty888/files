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
  #include <stdio.h>
#include <locale.h>

    void main(){
  setlocale(LC_ALL,"portuguese");
  int contador;
  for(contador=5;contador>=0;contador--){
    int patinhos = contador - 1;
    if (contador==0){
        printf("\n A mamãe patinha foi procurar");
    } else if(contador==1){
        printf("\n 1 patinho foi passear");
    } else{
    printf("\n %d patinhos foram passear",contador);
    }
    printf("\n Além das montanhas");
    if (contador==0){
        printf("\n Na beira do mar");
    } else{
        printf("\n Para brincar");
    }
    printf("\n A mamãe gritou: Quá, quá, quá, quá");
    if (patinhos == 0){
        printf("\n Mas nenhum patinho voltou de lá");
    } else if(patinhos == 1){
    printf("\n Mas só um patinho voltou de lá");
    }else if(patinhos==-1){
    printf("\n E os cinco patinhos voltaram de lá");
    } else {
    printf("\n Mas só %d patinhos voltaram de lá",patinhos);
    }
  }
  }



