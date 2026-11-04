#include <stdio.h>
#include <locale.h>

float potencia(float base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else if (base == 0) {
        return 0;
    } else if (expoente == 1){
        return base;
    } else return base * potencia(base,expoente-1);
}

void main() {
    float A;
    int B;
    float resultado;
    setlocale(LC_ALL,"portuguese");

    printf("Digite o valor da base: ");
    scanf("%f", &A);
    printf("Digite o valor do expoente: ");
    scanf("%d", &B);
    resultado = potencia(A,B);

    printf("\n Potencia: %.2f \n", resultado);

}
