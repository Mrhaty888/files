#include <stdio.h>
#include <locale.h>

int soma(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else return n + soma(n-1);
}

void main() {
    int valor;
    int soma_feita;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    soma_feita = soma(valor);

    printf("\n Soma: %d \n", soma_feita);

}
