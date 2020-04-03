#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec;
    int x;
    int count = 0;
    int max = 0;

    scanf("%d", &dec);

    while (dec > 0) {
        x = dec % 2;
        dec = trunc(dec / 2);
        if (x == 1) {
            count++;
        }
        else {
            if (count > max) {
                max = count;
            }
            count = 0;
        }
    }

    if (max >= count) {
        printf("%d", max);
    }

    else {
        printf("%d", count);
    }

    return 0;
}