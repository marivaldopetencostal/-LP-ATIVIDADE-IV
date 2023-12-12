#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct funcionariosRegistros
{
    char nome[100];
    int cargo;
    float salario;
};

struct funcionariosRegistros funcionario[99];
int i;
int c;
int j;
int z;
int verCargo;
char resp[50];
float mediaSalarialProgramador;
float mediaSalarialAnalista;
float mediaProgramadores;
float mediaAnalistas;

float calcularMediaSalarial(int cargooo, float novoSalario)
{
    if (cargooo == 1)
    {
        mediaSalarialProgramador = (mediaSalarialProgramador + novoSalario) / j;
        return mediaSalarialProgramador;
    }

    if (cargooo == 2)
    {
        mediaSalarialAnalista = (mediaSalarialAnalista + novoSalario) / z;
        return mediaSalarialAnalista;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    do
    {
        c = c + 1;
        fflush(stdin);
        printf("Digite o nome do FUNCION�RIO: ");
        gets(funcionario[c].nome);

        printf("\nEscolha o CARGO: ");
        printf("\n1 - Programador");
        printf("\n2 - Analista \n");
        scanf("%d", &funcionario[c].cargo);

        printf("\nDigite a SALARIO: ");
        scanf("%f", &funcionario[c].salario);

        if (funcionario[c].cargo == 1)
        {
            j = j + 1;
            mediaProgramadores = calcularMediaSalarial(funcionario[c].cargo,funcionario[c].salario);
            printf("M�dia salarial de PROGRAMADORES R$ %f", mediaProgramadores);
        }
        else if (funcionario[c].cargo == 2)
        {
            z = z + 1;
            mediaAnalistas = calcularMediaSalarial(funcionario[c].cargo,funcionario[c].salario);
            printf("M�dia salarial de ANALISTAS R$ %f", mediaAnalistas);
        }


        printf("\nContinuar cadastrando FUNCION�RIOS? [s/n] ");
        gets(resp);
        fflush(stdin);
        printf("");

    } while (strcmp(resp, "s") == 0);

    printf("Deseja ver a media salario de qual CARGO? 1 ou 2");
    scanf("%d", &verCargo);
    printf("");

    switch (verCargo)
    {
    case 1:
        printf("M�dia salarial de PROGRAMADORES R$ %f", mediaProgramadores);
        break;

    case 2:
        printf("M�dia salarial de ANALISTAS R$ %f", mediaAnalistas);
        break;

    default:
        break;
    }

    getchar();
    return 0;
}
