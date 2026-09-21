#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

typedef struct{
    char nome[50],RA[7];
    float media;
} aluno;

void main(){
    setlocale(LC_ALL,"portuguese");
    aluno vetor_de_alunos[10];
    int i;
    char maior[50];
    float maior_media;
    float menor[2][7];
    for (i=0;i<10;i++){
        printf("Digite o nome do %d aluno", i+1);
        gets(vetor_de_alunos[i].nome);
        printf("Digite o RA do %d aluno",i+1);
        gets(vetor_de_alunos[i].RA);
        printf("Digite a média do %d aluno",i+1);
        scanf("%f",vetor_de_alunos[i].media);
        if (i==0){
            maior=vetor_de_alunos[i].nome;
            maior_media=vetor_de_alunos[i].media;
        }else{
            if (vetor_de_alunos[i].media > maior_media){
                    maior=vetor_de_alunos[i].nome;
                    maior_media=vetor_de_alunos[i].media;
        }
        getcha();
    }

}
