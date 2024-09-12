#include <stdio.h>
#include <time.h>

int main() {
    int diaNac, mesNac, anioNac;
    int diaHoy, mesHoy, anioHoy;
    int edadAnios = 0;
    int edadMeses = 0;
    int edadDias = 0;

    printf("Ingrese su fecha de nacimineto:" );
    scanf("%d %d %d", &diaNac, &mesNac, &anioNac);
    printf("Ingrese la fecha del dia de hoy: ");
    scanf("%d %d %d", &diaHoy, &mesHoy, &anioHoy);
    clock_t t0 = clock();
    edadAnios = anioHoy-anioNac;
    edadMeses = mesHoy-mesNac;
    edadDias = diaHoy-diaNac;

    if (edadDias < 0) { edadMeses=edadMeses-1; edadDias = edadDias+31; 
    } if (edadMeses < 0) { edadAnios = edadAnios-1; edadMeses = edadMeses+12; }

    printf("Tienes: %d años, %d meses, %d días.\n", edadAnios, edadMeses, edadDias);
    clock_t t1 = clock();
    double time = (double)(t1 - t0) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", time);

}