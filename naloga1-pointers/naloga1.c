#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int* numpointer = &num;
    int** numpointerpointer = &numpointer;
    scanf("%d", numpointer);
    
    printf("Vpisali ste: %d\n", **numpointerpointer);
    return 0;
}
