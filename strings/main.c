#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetString[20];

    printf("Digite algo (scanf convencional):");
    scanf("%s", &vetString);
    fflush(stdin);

    printf("Resultado: %s\n\n", vetString);


    printf("Digite algo (scanf aprimorado): \n");
    scanf("%19[^\n]s",vetString);
    fflush(stdin);

    printf("Resultado: %s\n\n", vetString);




    return 0;
}
