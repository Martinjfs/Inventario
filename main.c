#include <stdio.h>
#include "funciones.h"

int main() {
    char nombres[MAX_PRODUCTOS][50];
    int cantidades[MAX_PRODUCTOS];
    float precios[MAX_PRODUCTOS];
    int numProductos = 0;
    int opcion;

    do {
        printf("\nMenú:\n");
        printf("1. Ingresar Producto\n");
        printf("2. Editar Producto\n");
        printf("3. Eliminar Producto\n");
        printf("4. Listar Productos\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto(nombres, cantidades, precios, &numProductos);
                break;
            case 2:
                editarProducto(nombres, cantidades, precios, numProductos);
                break;
            case 3:
                eliminarProducto(nombres, cantidades, precios, &numProductos);
                break;
            case 4:
                listarProductos(nombres, cantidades, precios, numProductos);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
