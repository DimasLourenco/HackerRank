#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int numerolinhas;
    char * str;

    str = malloc( 100 * sizeof(char));
    
    scanf("%lld", &numerolinhas);

    struct Dicionario
    {
        char nome [64];
        long long int numero;
    } * map;

    map = malloc (100000 * sizeof(map));

    for (long long int i=0; i<numerolinhas; i++)
    {
        scanf ("%s %lld", map[i].nome, &map[i].numero);
    }

    while (scanf("%s", str) != EOF) 
    {
        int count = 0;
        for (long long int j=0; j<numerolinhas; j++)
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

    free (str);
    free (map);
    return 0;
}
