#include <stdio.h>
#include <locale.h>

int main(void)
{   setlocale(LC_ALL, "Rus");
    char n[80];
    printf("неплохо\n");
    scanf("%[^\n]", n);
    printf("%s\n", n);
    return 0;
}
