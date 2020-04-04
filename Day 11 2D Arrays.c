#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{    

    int ar [6][6];
    int sum;
    int max = -32767;

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++) {
            sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];

            if (sum > max) {
                max = sum;
            }
        }
    }

    printf("%d", max);

        return 0;
}