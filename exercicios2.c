
#include <stdio.h>
#include <locale.h>
/*void main(){
 setlocale(LC_ALL,"portuguese");
 float num1,num2,num3,num4,num5;
 printf("Digite 5 números: ");
 scanf("%f",&num1);
 float maior = num1;
 float menor = num1;
 if (num1>maior)
    maior=num1;
 if (num1<menor)
    menor=num1;
 scanf("%f",&num2);
 if (num2>maior)
    maior=num2;
 if (num2<menor)
    menor=num2;
 scanf("%f",&num3);
 if (num3>maior)
    maior=num3;
 if (num3<menor)
    menor=num1;
 scanf("%f",&num4);
 if (num4>maior)
    maior=num4;
 if (num4<menor)
    menor=num4;
 scanf("%f",&num5);
 if (num5>maior)
    maior=num5;
 if (num5<menor)
    menor=num5;
float soma=num1+num2+num3+num4+num5;
float media=soma/5;
printf("Maior número: %.2f \nMenor número: %.2f \nSoma= %.2f \nMédia= %.2f",maior,menor,soma,media);
 //maior
}*/
//ex 2
/*void main(){
 setlocale(LC_ALL,"portuguese");
 float n1;
 float n2;
 printf("Digite 2 valores: ");
 scanf("%f",&n1);
 scanf("%f",&n2);
 if (n2!=0){
    float divisao=n1/n2;
    printf("Divisão= %.2f",divisao);
 }
 else
    printf("Não é possível dividir por 0.");
}*/

//ex3
/*void main(){
 setlocale(LC_ALL,"portuguese");
 int numero;
 printf("Digite um número");
 scanf("%d",&numero);
 if (numero%2==0)
    printf("%d é par",numero);
 else
    printf("%d é impar",numero);
}*/

//ex4
/*void main(){
 setlocale(LC_ALL,"portuguese");
 float nota1;
 float nota2;
 printf("Digite sua nota mensal: ");
 scanf("%f",&nota1);
 printf("Digite sua nota bimestral: ");
 scanf("%f",&nota2);
 float media = (nota1+nota2)/2;
 if (media>=7)
    printf("Você foi aprovado.");
 else if (media>=4){
    float nota_exame = 10 - media;
    printf("Você está de exame \nNota mínima para passar: %f",nota_exame);
 }
 else
    printf("Você foi reprovado.");
}*/

//ex5
void main(){
 setlocale(LC_ALL,"portuguese");
 float salario;
 float aliquota;
 printf("Digite o seu salário: R$ ");
 scanf("%f",&salario);
 if (salario<=2480.80)
    aliquota=0;
 else if(salario<=2826.65)
    aliquota=7.5;
 else if(salario<=3751.05)
    aliquota=15;
 else if(salario<=4664.68)
    aliquota=22.5;
 else
    aliquota=27.5;
 printf("Aliquota: %.1f%%",aliquota);
}




