#include <stdio.h>

int main (){
    float diametroUno;
    float diametroDos;
    float diametroTres;
    float radioUno;
    float radioDos;
    float radioTres;
    float areaUno;
    float areaDos;
    float areaTres;
    float pi = 3.1416;

    puts("AREA PRIMER CIRCULO");
    puts("Ingrese el diametro del circulo");
    scanf("%f", &diametroUno);
    radioUno = diametroUno / 2;
    areaUno = radioUno * radioUno * pi;
    printf("Area = %f\n\n", areaUno);

    puts("AREA SEGUNDO CIRCULO");
    puts("Ingrese el diametro del circulo");
    scanf("%f", &diametroDos);
    radioDos = diametroDos / 2;
    areaDos = radioDos * radioDos * pi;
    printf("Area = %f\n\n", areaDos);

    puts("AREA TERCER CIRCULO");
    puts("Ingrese el diametro del circulo");
    scanf("%f", &diametroTres);
    radioTres = diametroTres / 2;
    areaTres = radioTres * radioTres * pi;
    printf("Area = %f\n\n", areaTres);

    puts("FIN.");
}