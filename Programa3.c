#include<stdio.h>

int main() {
    int a, b, suma;

    printf("Dame un número: ");
    scanf("%d", &a);

    printf("Dame otro número: ");
    scanf("%d", &b);

    suma = a + b;

    printf("La suma de %d y %d es %d\n", a, b, suma);

    return 0;
}
