#include <stdio.h>

int main(void)
{
    int altura, i, j, k;
    do
    {
        altura = printf("Coloque a altura que vc deseja: ");
        scanf("%d", &altura);
    }
    while (altura < 1 || altura > 8);

    for (i = 0; i < altura; i++)
    {
        for (k = 0; k < altura - i - 1; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
