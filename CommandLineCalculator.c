#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    if (strcmp(argv[1], "add")==0)
    {
        int ptr1, ptr2;
        ptr1 = atoi(argv[2]);
        ptr2 = atoi(argv[3]);
        int x = ptr1 + ptr2;
        printf("%d", x);
    }
    else if (strcmp(argv[1], "subtract")==0)
    {
        int ptr1, ptr2;
        ptr1 = atoi(argv[2]);
        ptr2 = atoi(argv[3]);
        int x = ptr1 - ptr2;
        printf("%d", x);
    }
    else if (strcmp(argv[1], "divide")==0)
    {
        int ptr1, ptr2;
        ptr1 = atoi(argv[2]);
        ptr2 = atoi(argv[3]);
        int x = ptr1 / ptr2;
        printf("%d", x);
    }
    else if (strcmp(argv[1],"multiply")==0)
    {
        int ptr1, ptr2;
        ptr1 = atoi(argv[2]);
        ptr2 = atoi(argv[3]);
        int x = ptr1 * ptr2;
        printf("%d", x);
    }
    
    return 0;
}
