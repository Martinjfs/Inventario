#ifndef FUNCIONES_H
#define FUNCIONES_H

#define MAX_PRODUCTOS 100

void ingresarProducto(char nombres[][50], int cantidades[], float precios[], int *numProductos);
void editarProducto(char nombres[][50], int cantidades[], float precios[], int numProductos);
void eliminarProducto(char nombres[][50], int cantidades[], float precios[], int *numProductos);
void listarProductos(char nombres[][50], int cantidades[], float precios[], int numProductos);

#endif
