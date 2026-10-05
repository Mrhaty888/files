#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void calcular_media(int n){
    int i;
    if (n <=0) {
        printf("\nValor inválido\n");
    } else {
        float media=0,valor;
        for (i=0;i<n;i++) {
            printf("\nDigite o %dº valor da média: ",i+1);
            scanf("%f",&valor);
            media += valor;
        }
        media = media/n;
        printf("\nA média é de: %.2f \n",media);
}
}

void area_cubo(float l) {
    if (l <= 0) {
        printf("\nNúmero inválido.\n");
    } else {
    float area = l*6;
    printf("\nA área do cubo é de: %.2f \n",area);
}
}

void fatorial(int n){
    int i;
    int fatorial = 1;
    if (n < 0) {
        printf("\nNúmero inválido.\n");
    } else {
    for (i=1;i<=n;i++){
        fatorial = fatorial*i;
    }
    printf("\nO fatorial de %d é: %d \n",n,fatorial);
}
}

void main(){
    setlocale(LC_ALL,"portuguese");
    int opcao;
    int numero_media;
    float lado;
    int fatorial_numero;
    do {
    printf("-----MENU-----\n");
    printf("[1]-Calcular média de n valores.\n");
    printf("[2]-Calcular área de um cubo.\n");
    printf("[3] Calcular fatorial de um número\n");
    printf("[0] Sair\n");

    printf("\nEscolha uma opção digitando o seu número: ");
    scanf("%d",&opcao);

    switch (opcao) {
        case 1:
            printf("\nQuantos números estarão na média?: ");
            scanf("%d",&numero_media);
            if (numero_media <= 0) {
                printf("\nNúmero inválido\n");
            } else {
                calcular_media(numero_media);
            }
            break;
        case 2:
            printf("\nQual o tamanho do lado?: ");
            scanf("%f",&lado);
            area_cubo(lado);
            break;
        case 3:
            printf("\nQual o número do fatorial?: ");
            scanf("%d",&fatorial_numero);
            fatorial(fatorial_numero);
            break;
        case 0:
            printf("\nSaindo . . .\n");
            break;
        default:
            printf("\nOpção inválida.\n");
            break;
    }
    system("pause");
    system("cls");
    }while (opcao!=0);

}
