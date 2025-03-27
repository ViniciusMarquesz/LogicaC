#include <stdio.h>
#include <string.h>

// Definindo a estrutura que ira armazenar as infomacoes dos alunos
typedef struct {

    char nome[50];
    int idade;
    float nota;

} Aluno;

void lerDados(Aluno *aluno);
void imprimirAlunos(Aluno alunos[], int quantidade);
void calcularMedia(Aluno alunos[], int quantidade);

int main(void) {

    //Variavel
    int quantidade;

    //Variavel da struct Aluno
    Aluno alunos[quantidade];

    printf("Quantos alunos deseja cadastrar? "); //Exibe na tela
     scanf("%i", &quantidade); //Ler os dados digitado pelo usuario
     getchar(); // // Remove o '\n' deixado pelo scanf para evitar problemas no fgets

    //Laço de repetição coletando os dados de cada aluno
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        lerDados(&alunos[i]); // Chamando a função lerDados para preencher
    }

    imprimirAlunos(alunos, quantidade); // Exibi a lista de alunos cadastrador.
    calcularMedia(alunos, quantidade); // Exibi a media de nota da turma


    return 0;
}

//Funcao para coletar as informaçoes/dados dos alunos
void lerDados(Aluno *aluno) {
    printf("Digite o nome do aluno: ");
     fgets(aluno->nome, 50, stdin); //Le o nome do aluno
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0'; //Remove a quebra de linha

    printf("Digite a idade do aluno: ");
     scanf("%i", &aluno->idade);

    printf("Digite a nota do aluno: ");
     scanf("%f", &aluno->nota);
     getchar();
}

//Função para exibir os alunos cadastrados
void imprimirAlunos(Aluno alunos[], int quantidade) {
    printf("Lista de alunos: \n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }
}

//Funcao para calcular a media da turma
void calcularMedia(Aluno alunos[], int quantidade) {
    float soma = 0;

    //Percorre as notas do aluno e armazena na variavel "soma"
    for (int i = 0; i < quantidade; i++) {
        soma += alunos[i].nota;
    }

    //Calcula a media das notas
    float media = soma / (float)quantidade;

    printf("A media da turma foi: %.2f\n", media);
}