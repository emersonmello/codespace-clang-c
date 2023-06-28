#include <stdio.h>

int main(int argc, char *argv[])
{

    if (argc > 1)
    {
        printf("Olá %s\n", argv[1]);
    }
    else
    {
        printf("Olá mundo\n");
    }

    return 0;
}