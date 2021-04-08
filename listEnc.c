#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[20];
    int idade;
    struct aluno * proximo;
       
} Aluno;

int main(){

    Aluno * ini_aluno;
    Aluno * proximo_aluno;
    int resp;

    ini_aluno = (Aluno *)malloc(sizeof(Aluno));
    proximo_aluno = ini_aluno;

    while (1)
    {
        printf("\n");
        
        printf("digite o nome = ");
        fgets(proximo_aluno->nome,20,stdin);
        
        printf("digite a idade = ");
        scanf("%i", &proximo_aluno->idade);

        

        //printf("%s",proximo_aluno->nome);


    }
    

}