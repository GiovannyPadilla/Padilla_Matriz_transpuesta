#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // Creación de variables
    int filas, columnas;
    
    // Pedir al usuario que ingrese el número de filas y columnas en la matriz
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int transpuesta[columnas][filas];

    srand(time(NULL));

    printf("\nMatriz original:\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = rand() % 100; // Generar un número aleatorio entre 0 y 99
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transpuesta:\n");

    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            transpuesta[i][j] = matriz[j][i];
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
