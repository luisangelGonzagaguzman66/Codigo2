#include<stdio.h>
float maximo(float a, float b);

int main() {
    float a, b, max;
    printf("Ingrese el valor de a \n");
    scanf("%s", &a);
    printf("Ingrese el valor de b \n");
    scanf("%s", &b);
    max = maximo(a, b);
    printf("El mayor es %s \n", max);
    return 0;
}
float maximo(float a, float b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}