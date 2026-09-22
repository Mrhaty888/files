#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

/*typedef struct{
    char nome[50],RA[7];
    float media;
} aluno;

void main(){
    setlocale(LC_ALL,"portuguese");
    aluno vetor_de_alunos[10];
    int i;
    float maior;
    float menor;
    for (i=0;i<10;i++){
        printf("Digite o nome do %d aluno: ", i+1);
        gets(vetor_de_alunos[i].nome);
        printf("Digite o RA do %d aluno: ",i+1);
        gets(vetor_de_alunos[i].RA);
        printf("Digite a média do %d aluno: ",i+1);
        scanf("%f",&vetor_de_alunos[i].media);
        if (i==0) {
            maior = vetor_de_alunos[0].media;
            menor = vetor_de_alunos[0].media;
        } else {
            if (vetor_de_alunos[i].media > maior){
                    maior=vetor_de_alunos[i].media;
            }
            if (vetor_de_alunos[i].media < menor) {
                    menor=vetor_de_alunos[i].media;
            }
        }
        getchar();
    }

    for (i=0;i<10;i++){
        if (vetor_de_alunos[i].media == maior){
            printf("%s tem a média mais alta. \n",vetor_de_alunos[i].nome);
        }
        if (vetor_de_alunos[i].media == menor){
            printf("%s tem a média mais baixa. \n",vetor_de_alunos[i].RA);
        }
    }
}*/

typedev struct{
    char nome[50],endereco[50],telefone[11],email[50];
} contato;

void main(){
    setlocale(LC_ALL,"portuguese");
    contato vetor_de_contatos[100];
    int i,j;
    char continuar;

    for (i=0;i<100;i++) {
        printf("\nDigite o nome do %dº contato: ",i+1);
        gets(vetor_de_contatos[i].nome);
        printf("\nDigite o endereco do %dº contato: ",i+1);
        gets(vetor_de_contatos[i].endereco);
        printf("\nDigite o telefone do %dº contato: ",i+1);
        gets(vetor_de_contatos[i].telefone);
        printf("\nDigite o email do %dº contato: ",i+1);
        gets(vetor_de_contatos[i].email);
        printf("\nContinuar cadastrando contatos?(s/n): ");
        gets(continuar;)
        _strlwr(continuar);
        if (continuar=="s") {
            break;
        }
        getchar();
    }

    for (j=0;j<1;j++) {
        printf("\n____________contato 1 ____________");
        printf("\nNome: %s ",vetor_de_contatos[j].nome);
        printf("\nEndereco: %s ",vetor_de_contatos[j].endereco);
        printf("\n: %s ",vetor_de_contatos[j].telefone);
        printf("\nNome: %s ",vetor_de_contatos[j].email);
    }
}

