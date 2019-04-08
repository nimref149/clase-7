#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[120];
    printf("ingrese nombre y apellido: ");
    /*scanf("%s",palabra);*/

    /*gets(palabra);*/
    scanf("%[^\n]",palabra);
    /*fgets(palabra,1024,stdin);*/

    printf("%s",palabra);



    return 0;
}
