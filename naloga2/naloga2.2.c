#include <stdio.h>
#include <stdlib.h>

void withCharPointer();
void withChar();

int main(int argc, char const *argv[])
{
    withCharPointer();

    withChar();
    
    return 0;
}

void withCharPointer(){
    char* c = malloc(1);
    printf("Vpiši znak:");

    scanf("%c", c);
    scanf("%c", c);


    printf("ASCII za %c je %d\n", *c, *c);
    free(c);
}

void withChar(){
    char c;
    printf("Vpiši znak:");

    scanf("%c", &c);

    printf("ASCII za %c je %d", c, c);
}