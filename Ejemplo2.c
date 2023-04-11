#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Sumar dos numeros
    int num1, num2, resp = 0;
    printf("Dime un numero: ");
    scanf("%d", &num1);
    printf("Dime otro numero: ");
    scanf("%d", &num2);
    resp = num1 + num2;
    printf("La s uma es %d/n", resp);
}