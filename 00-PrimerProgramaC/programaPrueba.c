#include <stdio.h>
#define FIL 5
#define COL 10

int main()
{
    int decimal = 9;
    int octal = 011;
    int entrada;

    printf("variable 'decimal' impresa como decimal: %d\n", decimal);
    printf("la misma variable 'decimal' impresa como octal: %o\n", decimal);

    printf("ahora la variable 'octal' impresa como decimal: %d\n", octal);
    printf("la misma variable 'octal' impresa como octal: %o\n", octal);

    scanf("%d", &entrada);
    printf("numero ingresado %d\n", entrada);
    

    int tablaMultiplicarHasta50[FIL][COL];

    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            tablaMultiplicarHasta50[i][j] = (i+1) * (j+1);
            printf("%d, ", tablaMultiplicarHasta50[i][j]);
        }
        printf("\n");
    }

    return 0;
}