
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para la tabla de multiplicar sin punteros con medición de ciclos
void tablaMultiplicarSinPunteros() {
    int numero, i;
    clock_t inicio, fin;
    double ciclos;

    printf("\nIngrese un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);

    inicio = clock();
    
    printf("\nTabla de multiplicar del %d:\n", numero);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    fin = clock();
    ciclos = (double)(fin - inicio);
    
    printf("\nCiclos de reloj utilizados: %.2f\n", ciclos);
}

// Función para la tabla de multiplicar con punteros
void tablaMultiplicarConPunteros() {
    int numero, i;
    int *ptr_numero = &numero;
    
    printf("\nIngrese un número para generar su tabla de multiplicar: ");
    scanf("%d", ptr_numero);
    
    printf("\nTabla de multiplicar del %d:\n", *ptr_numero);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", *ptr_numero, i, (*ptr_numero) * i);
    }
}

// Función para el sistema de venta POST
void sistemaPost() {
    int cantidad, i;
    float total = 0;
    
    do {
        printf("\nIngrese la cantidad de productos (entre 1 y 5): ");
        scanf("%d", &cantidad);
        
        if(cantidad < 1 || cantidad > 5) {
            printf("Error: Debe ingresar entre 1 y 5 productos.\n");
        }
    } while(cantidad < 1 || cantidad > 5);
    
    char productos[5][50];
    float precios[5];
    
    for(i = 0; i < cantidad; i++) {
        printf("\nProducto %d:\n", i+1);
        printf("Nombre: ");
        scanf("%s", productos[i]);
        printf("Precio: ");
        scanf("%f", &precios[i]);
        total += precios[i];
    }
    
    printf("\n--- TICKET DE COMPRA ---\n");
    for(i = 0; i < cantidad; i++) {
        printf("%-20s $%.2f\n", productos[i], precios[i]);
    }
    printf("-----------------------\n");
    printf("TOTAL:          $%.2f\n", total);
}

// Función principal con menú
int main() {
    int opcion;
    
    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Tabla de multiplicar (sin punteros) con ciclos de reloj\n");
        printf("2. Tabla de multiplicar con punteros\n");
        printf("3. Sistema POST de venta\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                tablaMultiplicarSinPunteros();
                break;
            case 2:
                tablaMultiplicarConPunteros();
                break;
            case 3:
                sistemaPost();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while(opcion != 4);
    
    return 0;
}


    