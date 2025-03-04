#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listaLivros
    {
        char titulo[100];
        char autor[100];
        char genero[100];
        char ISBN[100];
        int anoPublicacao, codigo;
    };
    struct listaLivros livros[150]; // Criando um vetor de livros com capacidade para 150 livros



int main() {
    //Menu principal
    printf("|-----------------------------------------------|\n");
    printf("|          Bem-vindo ao Projeto Biblion.        |\n");
    printf("| Aqui você pode pesquisar livros na biblioteca |\n"); 
    printf("| e consultar se o livro está disponível ou não.|\n");
    printf("|-----------------------------------------------|\n");
    printf("|        Escolha uma das opções abaixo:         |\n");
    printf("|-----------------------------------------------|\n");
    printf("|           1 - Consulta de livros              |\n");
    printf("|           2 - Cadastro de livros              |\n");
    printf("|           3 - Empréstimo de livros            |\n");
    printf("|           4 - Relatórios de livros            |\n");
    printf("|           5 - Sair                            |\n");
    printf("|-----------------------------------------------|\n");

    int MenuPrincipal;
    scanf("%d", &MenuPrincipal);

    //Cadastro de livros
    int numLivrosCadastrados = 0;
    int opcaoCadastrar;

    //Relatórios de livros
    int opcaoRelatorios;
    
     //Menu de opções do Menu Principal
    if (MenuPrincipal == 1) //Consulta de livros
    {
        int opcaoConsultar;
        printf("Você escolheu: 1 - Consultar livros. \n");
        printf("Digite o número da opção desejada: \n");
        printf("1 - Consultar livro por título \n");
        printf("2 - Consultar livro por autor \n");
        printf("3 - Consultar livro por gênero \n");
        printf("4 - Consultar livro por código ISBN \n");
        printf("5 - Voltar ao menu principal \n");
        scanf("%d", &opcaoConsultar);

        for (int i = 0; i < opcaoConsultar; i++) 
        {
            printf("Digite o título do livro que deseja consultar: \n");
            scanf("%s", livros[numLivrosCadastrados].titulo);
            printf("O livro está disponível para empréstimo. \n");
            printf("Deseja consultar outro livro? \n");
            printf("1 - Sim \n");
            printf("2 - Não. Voltar ao menu principal \n");
            scanf("%d", &opcaoConsultar);
            while (opcaoConsultar == 1)
            {
               return opcaoConsultar;
            }
            while (opcaoConsultar == 2)
            { 
                return &MenuPrincipal;
            }     
        }
        for (int i = 1; i < opcaoConsultar; i++) 
        {
            printf("Digite o nome do autor do livro que deseja consultar: \n");
            scanf("%s", livros[numLivrosCadastrados].autor);
            //logica para ser implementada
            // if(livros nao existe?)
            // {
            //     printf("Livro não encontrado. \n");
            // }
            // else if(livro existe && livro está disponível)
            // {
            //     printf("O livro está disponível para empréstimo. \n");
            // }
            // else if(livro existe && livro não está disponível)
            // {
            //     printf("O livro não está disponível para empréstimo. \n");
            // }
            printf("O livro está disponível para empréstimo. \n");
            printf("Deseja consultar outro livro? \n");
            printf("1 - Sim \n");
            printf("2 - Não. Voltar ao menu principal \n");
            scanf("%d", &opcaoConsultar);
            while (opcaoConsultar == 1)
            {
               return opcaoConsultar;
            }
            while (opcaoConsultar == 2)
            { 
                return &MenuPrincipal;
            }     
        }
        for (int i = 2; i < opcaoConsultar; i++) 
        {
            printf("Digite o gênero do livro que deseja consultar: \n");
            scanf("%s", livros[numLivrosCadastrados].genero);
            printf("O livro está disponível para empréstimo. \n");
            printf("Deseja consultar outro livro? \n");
            printf("1 - Sim \n");
            printf("2 - Não. Voltar ao menu principal \n");
            scanf("%d", &opcaoConsultar);
            while (opcaoConsultar == 1)
            {
               return opcaoConsultar;
            }
            while (opcaoConsultar == 2)
            { 
                return &MenuPrincipal;
            }     
        }
        for (int i = 3; i < opcaoConsultar; i++) 
        {
            printf("Digite o código ISBN do livro que deseja consultar: \n");
            scanf("%s", livros[numLivrosCadastrados].ISBN);
            printf("O livro está disponível para empréstimo. \n");
            printf("Deseja consultar outro livro? \n");
            printf("1 - Sim \n");
            printf("2 - Não. Voltar ao menu principal \n");
            scanf("%d", &opcaoConsultar);
            while (opcaoConsultar == 1)
            {
               return opcaoConsultar;
            }
            while (opcaoConsultar == 2)
            { 
                return &MenuPrincipal;
            }     
        }
        for (int i = 4; i < opcaoConsultar; i++) 
        {
            return &MenuPrincipal;
        }
    }
    else if (MenuPrincipal == 2) //Cadastro de livros
    {
        printf("Você escolheu: 2 - Cadastrar livros. \n");
        printf("Para cadastro de livros precisaremos de algumas informações, como titulo, autor, gênero e ISBN. \n");
            printf("Digite o nome do livro que deseja cadastrar: \n");
            scanf("%s", livros[numLivrosCadastrados].titulo);
            printf("Digite o nome do autor do livro que deseja cadastrar: \n");
            scanf("%s", livros[numLivrosCadastrados].autor);
            printf("Digite o gênero do livro que deseja cadastrar: \n");
            scanf("%s", livros[numLivrosCadastrados].genero);
            printf("Digite o ISBN do livro que deseja cadastrar: \n");
            scanf("%s", livros[numLivrosCadastrados].ISBN);
            numLivrosCadastrados++; 
            printf("Livro cadastrado com sucesso! \n");
            printf("Deseja cadastrar outro livro? \n");
            printf("1 - Sim \n");
            printf("2 - Não. Voltar ao menu principal \n");
            scanf("%d", &opcaoCadastrar);
            while (opcaoCadastrar == 1)
            {
               return opcaoCadastrar;
            }
            while (opcaoCadastrar == 2)
            { 
                return MenuPrincipal;
            }     
            
    }
    else if (MenuPrincipal == 3)//Empréstimo de livros
    {
        //fluxo de empréstimo de livros para ser implementado
        printf("Você escolheu: 3 - Empréstimo de livros. \n");
   }
   else if (MenuPrincipal == 4)//Relatórios de livros
    {
        //fluxo de relatórios de livros para ser implementado
        printf("Você escolheu: 4 - Relatórios de livros \n");
        printf("Digite o número da opção desejada: \n");
        printf("1 - Relatório de livros disponíveis \n");
        printf("2 - Relatório de livros emprestados \n");
        printf("3 - Relatório de livros atrasados \n");
        scanf("%d", &opcaoRelatorios);

    }
    else if (MenuPrincipal == 5)//Sair do programa
    {
        printf("Você escolheu: 5 - Sair. \n");

    }
    else
    {
        printf("Opção inválida. \n");
    }
       
}
