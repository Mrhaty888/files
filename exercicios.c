#include <stdio.h>
#include <locale.h>

//int main(){
 /*(LC_ALL,"portuguese");
 int nota_1;
 int nota_2;
 int nota_3;
 int nota_4;
 printf("Digite 4 números. \n");
 scanf("%d",&nota_1);
 scanf("%d",&nota_2);
 scanf("%d",&nota_3);
 scanf("%d",&nota_4);
 float media = (nota_1+nota_2+nota_3+nota_4)/4;
 printf("Média: %f",media);

 return;
}*/

//ex 3
/*void main(){
 setlocale(LC_ALL,"portuguese");
 float merc;
 float desc;
 printf("Digite o valor da mercadoria: \n");
 scanf("%f",&merc);
 printf("Digite o valor do desconto: \n");
 scanf("%f",&desc);
 float preco=merc - (merc*(desc/100));
 printf("Preço final:%f",preco);

}*/

//ex 4
/*void main(){
 setlocale(LC_ALL,"portuguese");
 float a;
 float b;
 float c;
 printf("Digite 3 valores: ");
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
 float x=2*a*b + 3*a*c - 4*b*c;
 printf("Valor final: %f",x);
}*/

//ex 5
/*void main(){
 setlocale(LC_ALL,"portuguese");
 float a;
 float b;

 printf("Digite 2 valores: \n");
 scanf("%f",&a);
 scanf("%f",&b);
 float c = a;
 a = b;
 b = c;
 printf("Valores trocados \n");
 printf("Primeiro valor: %f \n Segundo valor: %f ",a,b);
}*/

//ex 6
/*void main(){
 setlocale(LC_ALL,"portuguese");
 float lado;
 printf("Digite o lado do quadrado: \n");
 scanf("%f",&lado);
 float area = lado*lado;
 float perimetro = 4*lado;
 printf("Área: %f \nPerimetro: %f ",area,perimetro);
}*/

//ex 7
void main(){
 setlocale(LC_ALL,"portuguese");
 char nome[50];
 float nota1;
 float nota2;
 printf("Digite seu nome: \n");
 gets(nome);
 printf("Digite sua primeira nota: \n");
 scanf("%f",&nota1);
 printf("Digite sua segunda nota: \n");
 scanf("%f",&nota2);
 float media = (nota1+nota2)/2;
 printf("Média: %.1f \n",media);
 if (media>7){
    printf("aprovado");
 }
 else if (media<=7 && media>=4){
    printf("Em exame");
 }
 else {
    printf("reprovado");
 }
}
