#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

    struct informacao_contatos
    {
        char nome[200];
        char telefone[200];
        char imail[200];
    };

    int i;

    struct informacao_contatos contatos[3];

    char *informe(char *busca)
    {
    int k = 0;
    for ( i = 0; i < 3; i++)
    {
          if (strcmp(busca, contatos[i].nome) == 0) {
          k = i;
          return contatos[k].telefone;  
        }
        
    }
    
     return 0; 
    }
int main()
{

    char nome[200];
    char telefone[200];
    char imail[200];
    char busca[200];
    char *t;

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        printf("Digite o nome:");
        gets(contatos[i].nome);

        printf("Digite o telefone:");
        gets(contatos[i].telefone);

        printf("Digite o imail:");
        gets(contatos[i].imail);
    }
    printf("Digite o nome para buscar contato:");
    gets(busca);

    t = informe(busca);

      if (t == 0)
    {
        printf(" Nao encontrado.\n:");
    }
    else
    {
        printf("O numero de telefone de %s e: %s \n", busca, t);
    }


    return 0;
}