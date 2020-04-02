#include <stdio.h>
#include <stdlib.h>
#include <search.h>

int main()
{
    ENTRY e;
    ENTRY* ep;

    int n = 0;
    scanf("%d\n", &n);

    hcreate(n * 5 / 4);

    char* name = NULL;
    char* phone = NULL;
    for (int i = 0; i < n; ++i) {
        name = malloc(11 * sizeof(char));
        phone = malloc(9 * sizeof(char));
        scanf("%s %s", name, phone);
        e.key = name;
        e.data = phone;
        ep = hsearch(e, ENTER);
        if (!ep) exit(EXIT_FAILURE);
    }

    scanf("\n");

    char search_name[11];
    while(scanf("%[^\n]%*c", search_name) != EOF) {
        e.key = search_name;
        ep = hsearch(e, FIND);
        (ep) ? printf("%s=%s\n", search_name, ep->data) : printf("Not found\n");
    }

    if (name) free(name);
    if (phone) free(phone);
    hdestroy();
    return 0;
}