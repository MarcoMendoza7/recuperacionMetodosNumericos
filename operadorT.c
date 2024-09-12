#include <stdio.h>

int main() {
    float cantidad, descuento;
    int esCliente;

    puts("Ingrese la cantidad en pesos $...");
    scanf("%f", &cantidad);

    puts("¿Es cliente? Presione 1 para sí y 0 para no.");
    scanf("%d", &esCliente);

    descuento = esCliente ? cantidad * 0.2 : cantidad * 0.05;
    float total = cantidad - descuento;

    printf("\nCantidad ingresada: %.2f\n", cantidad);
    printf("Descuento aplicado: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", total);

    return 0;
}