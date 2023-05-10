#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Napiši 2 številki z presledkom vmes:");
    scanf("%d %d", &n1, &n2);


    printf("%d + %d = %d\n", n1, n2, n1+n2);
    return 0;
}
