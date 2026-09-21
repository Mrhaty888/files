#include <stdio.h>
#include <string.h>
#include <locale.h>

struct alunos {
    char aluno[50];
    int RA;
    char cidade[50];
    float media;
};

int main() {
    struct alunos aluno1, aluno2, aluno3;
    char nomes[3][50];
    float m1, m2;
    int posicao = 0;
    int i;

    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");

    printf("Digite seu nome: ");
    scanf(" %[^\n]s", aluno1.aluno);
    printf("Digite seu RA: ");
    scanf("%d", &aluno1.RA);
    printf("Digite sua cidade: ");
    scanf(" %[^\n]s", aluno1.cidade);
    printf("Digite sua média (use ponto, ex: 7.5): ");
    scanf("%f", &aluno1.media);

    if (_stricmp(aluno1.cidade, "marilia") == 0 || strcmp(aluno1.cidade, "marília") == 0 || strcmp(aluno1.cidade, "maríLIA") == 0 || strcmp(aluno1.cidade, "MARÍLIA") == 0) {
        strcpy(nomes[posicao], aluno1.aluno);
        posicao++;
    }

    printf("Digite seu nome: ");
    scanf(" %[^\n]s", aluno2.aluno);
    printf("Digite seu RA: ");
    scanf("%d", &aluno2.RA);
    printf("Digite sua cidade: ");
    scanf(" %[^\n]s", aluno2.cidade);
    printf("Digite sua média (use ponto, ex: 7.5): ");
    scanf("%f", &aluno2.media);

    if (_stricmp(aluno2.cidade, "marilia") == 0 || strcmp(aluno2.cidade, "marília") == 0 || strcmp(aluno2.cidade, "maríLIA") == 0 || strcmp(aluno2.cidade, "MARÍLIA") == 0) {
        strcpy(nomes[posicao], aluno2.aluno);
        posicao++;
    }

    printf("Digite seu nome: ");
    scanf(" %[^\n]s", aluno3.aluno);
    printf("Digite seu RA: ");
    scanf("%d", &aluno3.RA);
    printf("Digite sua cidade: ");
    scanf(" %[^\n]s", aluno3.cidade);
    printf("Digite sua média (use ponto, ex: 7.5): ");
    scanf("%f", &aluno3.media);

    if (_stricmp(aluno3.cidade, "marilia") == 0 || strcmp(aluno3.cidade, "marília") == 0 || strcmp(aluno3.cidade, "maríLIA") == 0 || strcmp(aluno3.cidade, "MARÍLIA") == 0) {
        strcpy(nomes[posicao], aluno3.aluno);
        posicao++;
    }

    if (aluno1.media >= aluno2.media && aluno1.media >= aluno3.media) {
        m1 = aluno1.media;
        if (aluno2.media >= aluno3.media) m2 = aluno2.media;
        else m2 = aluno3.media;
    }
    else if (aluno2.media >= aluno1.media && aluno2.media >= aluno3.media) {
        m1 = aluno2.media;
        if (aluno1.media >= aluno3.media) m2 = aluno1.media;
        else m2 = aluno3.media;
    }
    else {
        m1 = aluno3.media;
        if (aluno1.media >= aluno2.media) m2 = aluno1.media;
        else m2 = aluno2.media;
    }

    printf("\nAlunos que moram em Marília: ");
    for (i = 0; i < posicao; i++) {
        printf("%s ", nomes[i]);
    }
    printf("\nAlunos com as maiores médias: %.1f %.1f\n", m1, m2);

    return 0;
}
