#include <stdio.h>
#include <locale.h>


/*typedef struct{
	char nome[50], RA[7];
	float media;
} aluno;


void main(){
    setlocale(LC_ALL, "Portuguese");


    int i, tamanho = 10;
	aluno alunos[tamanho];
	float maior, menor;


	for (i = 0; i < tamanho; i++){
		printf("\nInforme o nome do aluno: ");
		gets(alunos[i].nome);
		printf("Informe o RA do aluno: ");
		gets(alunos[i].RA);
		printf("Informe a média do aluno: ");
		scanf("%f", &alunos[i].media);
		getchar();
	}


	maior = alunos[0].media;
	menor = alunos[0].media;
	for (i = 0; i < tamanho; i++){
		if (alunos[i].media > maior)
			maior = alunos[i].media;
        if (alunos[i].media < menor)
			menor = alunos[i].media;
	}


	for (i = 0; i < tamanho; i++){
		if (alunos[i].media == maior)
			printf("\nAluno(a) %s tem a maior média \n", alunos[i].nome);
	}


	for (i = 0; i < tamanho; i++){
		if (alunos[i].media == menor)
			printf("\nAluno(a) com RA %s tem a menor média \n", alunos[i].RA);
	}
}*/

#include <ctype.h>
#include <conio.h>


typedef struct{
    char nome[30], endereco[50], telefone[15], email[30];
} agenda;


void main(){
    setlocale(LC_ALL, "Portuguese");


    agenda v[100];
    int i = 0, tam;
    char resposta;


    //cadastra os dados na agenda
    do{
        printf("Informe o nome: ");
        gets(v[i].nome);
        printf("Informe o endereço: ");
        gets(v[i].endereco);
        printf("Informe o telefone: ");
        gets(v[i].telefone);
        printf("Informe o e-mail: ");
        gets(v[i].email);
        printf("\nDeseja fazer outro cadastro (s/n)?: ");
        resposta = getche();
        resposta = tolower(resposta); //converte a resposta do usuário para um caractere minúsculo
        printf("\n\n");
        i++;
    }while (resposta == 's' && i < 100);


    if (i == 100){
    	printf("Agenda lotada! \n\n");
        getch(); //comando usado apenas para aguardar o usuário pressionar qualquer tecla para continuar
    }


	tam = i;


	//exibe todos os dados na tela
	printf("Exibindo todos os contatos da agenda...\n");
    for (i = 0; i < tam; i++){
        printf("Nome: %s \n", v[i].nome);
        printf("Endereço: %s \n", v[i].endereco);
        printf("Telefone: %s \n", v[i].telefone);
        printf("E-mail: %s \n\n", v[i].email);
    }
}

