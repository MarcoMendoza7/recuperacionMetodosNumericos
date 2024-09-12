#include <stdio.h>
#include <time.h>

int main() {
    int diaNac, mesNac, anioNac;
    int diaHoy, mesHoy, anioHoy;
    int edadAnios=0;
    int edadMeses=0;
    int edadDias=0;
    int * edadAn;
    int * edadMes;
    int * edadDia;

    printf("Ingrese su fecha de nacimineto:\n ");
    scanf("%d %d %d", &diaNac, &mesNac, &anioNac);
    printf("Ingrese la fecha del dia de hoy:\n ");
    scanf("%d %d %d", &diaHoy, &mesHoy, &anioHoy);
     clock_t t0 = clock();
    edadAn = &edadAnios;
    edadMes = &edadMeses;
    edadDia = &edadDias;

    *edadAn = anioHoy-anioNac;
    *edadMes = mesHoy-mesNac;
    *edadDia = diaHoy-diaNac;

    if (*edadDia < 0) { 
        *edadMes-=1;
         *edadDia+=31;}
    if (*edadMes<0) { 
        *edadAn-=1; 
        *edadMes+=12;}

    printf("Tienes: %d años, %d meses, %d días.\n", edadAnios, edadMeses, edadDias);
    clock_t t1 = clock();
    double time = (double)(t1 - t0) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", time);

    return 0;
}