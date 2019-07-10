#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numerolinhas;
    char str [32];
    
    scanf("%d", &numerolinhas);

    struct Dicionario
    {
        char nome [32];
        long long int numero;
    } map[999];

    for (int i=0; i<numerolinhas; i++)
    {
        scanf ("%s %lld", map[i].nome, &map[i].numero);
    }

    while (scanf("%s", str) != EOF) 
    {
        int count = 0;
        for (int j=0; j<numerolinhas; j++)
        {
            if (!strcmp (str, map[j].nome))
            {
                printf("%s=%lld\n", map[j].nome, map[j].numero);
                count = 1;
            }
        }
        if (count != 1)
        {
            printf("Not found\n");
        }
    }  
    return 0;
}
