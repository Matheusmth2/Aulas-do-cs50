#include <stdio.h>

int main() {
    int start;
    do
    {
        printf("Começo da população: ");
        scanf("%d", &start);
    } while (start < 9);
    
    int end;
    do
    {
        printf("População final: ");
        scanf("%d", &end);
    } while (end < start);
    
    int years = 0;
    do
    {
        start = start - (start/4) + (start/3);
        years++;
    } while (end > start);

    printf("Anos: %i\n", years);
    
}