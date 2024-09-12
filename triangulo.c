#include <stdio.h>

int main() {
    float a;
    float b;
    float c;

    puts("INGRESE LOS LADOS DEL TRIANGULO. A, B Y C\n");
    puts("Lado a ...");
    scanf("%f", &a);
    puts("Lado b ...");
    scanf("%f", &b);
    puts("Lado c ...");
    scanf("%f", &c);

    if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
        puts("El triangulo es rectangulo.");
    } else {
        puts("El triangulo no es rectangulo.\n");
    }
    puts("FIN.");
} 
