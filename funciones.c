#include <stdio.h>
#include <string.h>
#include "funciones.h"

void ingresarProducto(char nombres[][50], int cantidades[], float precios[], int *numProductos) {
    if (*numProductos < MAX_PRODUCTOS) {
        printf("Ingrese el nombre del producto: ");
        scanf("%s", nombres[*numProductos]);

        printf("Ingrese la cantidad: ");
        scanf("%d", &cantidades[*numProductos]);

        printf("Ingrese el precio: ");
        scanf("%f", &precios[*numProductos]);

        (*numProductos)++;
        printf("Producto ingresado con éxito.\n");
    } else {
        printf("No se pueden ingresar más productos. Límite alcanzado.\n");
    }
}

void editarProducto(char nombres[][50], int cantidades[], float precios[], int numProductos) {
    if (numProductos > 0) {
        char nombreEditar[50];
        printf("Ingrese el nombre del producto a editar: ");
        scanf("%s", nombreEditar);

        int encontrado = 0;
        for (int i = 0; i < numProductos; i++) {
            if (strcmp(nombres[i], nombreEditar) == 0) {
                printf("Ingrese la nueva cantidad: ");
                scanf("%d", &cantidades[i]);

                printf("Ingrese el nuevo precio: ");
                scanf("%f", &precios[i]);

                printf("Producto editado con éxito.\n");
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Producto no encontrado.\n");
        }
    } else {
        printf("No hay productos para editar.\n");
    }
}

void eliminarProducto(char nombres[][50], int cantidades[], float precios[], int *numProductos) {
    if (*numProductos > 0) {
        char nombreEliminar[50];
        printf("Ingrese el nombre del producto a eliminar: ");
        scanf("%s", nombreEliminar);

        int encontrado = 0;
        for (int i = 0; i < *numProductos; i++) {
            if (strcmp(nombres[i], nombreEliminar) == 0) {
                // Mover los productos restantes para llenar el espacio eliminado
                for (int j = i; j < *numProductos - 1; j++) {
                    strcpy(nombres[j], nombres[j + 1]);
                    cantidades[j] = cantidades[j + 1];
                    precios[j] = precios[j + 1];
                }

                (*numProductos)--;
                printf("Producto eliminado con éxito.\n");
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Producto no encontrado.\n");
        }
    } else {
        printf("No hay productos para eliminar.\n");
    }
}

void listarProductos(char nombres[][50], int cantidades[], float precios[], int numProductos) {
    if (numProductos > 0) {
        printf("Lista de productos:\n");
        for (int i = 0; i < numProductos; i++) {
            printf("Nombre: %s, Cantidad: %d, Precio: %.2f\n", nombres[i], cantidades[i], precios[i]);
        }
    } else {
        printf("No hay productos para listar.\n");
    }
}
