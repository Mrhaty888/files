#include <stdio.h>
#include <locale.h>
#include <string.h>

struct alunos {
    char aluno[50];
    int RA;
    char cidade[50];
    float media;
};

void main(){
    struct alunos aluno1;
    struct alunos aluno2;
    struct alunos aluno3;
    char nomes[3][50];
    float m1, m2;
    int ra1, ra2;
    int posicao = 0;
    int i;

    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");

    fflush(stdin);
    printf("Digite seu nome: ");
    scanf("%s", aluno1.aluno);
    printf("Digite seu RA: ");
    scanf("%d", &aluno1.RA);
    fflush(stdin);
    printf("Digite sua cidade: ");
    scanf("%s", aluno1.cidade);
    printf("Digite sua média: ");
    scanf("%f", &aluno1.media);

    _strlwr(aluno1.cidade);
    if (strcmp(aluno1.cidade, "marilia") == 0) {
        sprintf(nomes[posicao], "%s", aluno1.aluno);
        posicao++;
    }

    fflush(stdin);
    printf("Digite seu nome: ");
    scanf("%s", aluno2.aluno);
    printf("Digite seu RA: ");
    scanf("%d", &aluno2.RA);
    fflush(stdin);
    printf("Digite sua cidade: ");
    scanf("%s", aluno2.cidade);
    printf("Digite sua média: ");
    scanf("%f", &aluno2.media);

    _strlwr(aluno2.cidade);
    if (strcmp(aluno2.cidade, "marilia") == 0) {
        sprintf(nomes[posicao], "%s", aluno2.aluno);
        posicao++;
    }

    fflush(stdin);
    printf("Digite seu nome: ");
    scanf("%s", aluno3.aluno);
    printf("Digite seu RA: ");
    scanf("%d", &aluno3.RA);
    fflush(stdin);
    printf("Digite sua cidade: ");
    scanf("%s", aluno3.cidade);
    printf("Digite sua média: ");
    scanf("%f", &aluno3.media);

    _strlwr(aluno3.cidade);
    if (strcmp(aluno3.cidade, "marilia") == 0) {
        sprintf(nomes[posicao], "%s", aluno3.aluno);
        posicao++;
    }

    if (aluno1.media >= aluno2.media && aluno1.media >= aluno3.media) {
        m1 = aluno1.media;
        ra1 = aluno1.RA;
        if (aluno2.media >= aluno3.media) {
            m2 = aluno2.media;
            ra2 = aluno2.RA;
        } else {
            m2 = aluno3.media;
            ra2 = aluno3.RA;
        }
    }
    else if (aluno2.media >= aluno1.media && aluno2.media >= aluno3.media) {
        m1 = aluno2.media;
        ra1 = aluno2.RA;
        if (aluno1.media >= aluno3.media) {
            m2 = aluno1.media;
            ra2 = aluno1.RA;
        } else {
            m2 = aluno3.media;
            ra2 = aluno3.RA;
        }
    }
    else {
        m1 = aluno3.media;
        ra1 = aluno3.RA;
        if (aluno1.media >= aluno2.media) {
            m2 = aluno1.media;
            ra2 = aluno1.RA;
        } else {
            m2 = aluno2.media;
            ra2 = aluno2.RA;
        }
    }

    printf("Alunos que moram em marília: ");
    for (i = 0; i < posicao; i++) {
        printf("%s ", nomes[i]);
    }
    printf("\nAlunos com as maiores médias: ");
    printf("%d , ", ra1);
    printf("%d .", ra2);
}
