#include <stdio.h>
#include <stdlib.h>
/*Realizar un algoritmo para convertir grados a radianes, haciendo uso de la siguiente relacion:
radianes=(pi/180)*grados.*/
int main()
{
    float grados, radianes, PI=3.1416;
    printf("INGRESE GRADOS: ");
    scanf("%f", &grados);
    radianes = PI / 180 * grados;
    printf("\nEN RADIANES ES = %.4f\n", radianes);
    return 0;
}
