#include <stdio.h>
#include <stdlib.h>
/*Un alumno desea saber cual sera su calificacion final en la materia de 
algoritmos. Dicha calificacion se compone de los siguientes porcentajes:
55% del promedio de sus 3 calificaciones parciales.
30% de la calificacion del examen final
15% de la calificacion de un trabajo final.*/
int main()
{
    float cal1, cal2, cal3, exafin, trafin, nota;
    float poncal, ponexafin, pontrafin;
    printf("TECLEE CALIFICACION 1: ");
    scanf("%f", &cal1);
    printf("TECLEE CALIFICACION 2: ");
    scanf("%f", &cal2);
    printf("TECLEE CALIFICACION 3: ");
    scanf("%f", &cal3);
    printf("TECLEE EXAMEN FINAL: ");
    scanf("%f", &exafin);
    printf("TECLEE TRABAJO FINAL: ");
    scanf("%f", &trafin);
    poncal = (float)(cal1 + cal2 + cal3)/ 3 * 0.55;
    ponexafin = exafin * 0.30;
    pontrafin = trafin * 0.15;
    nota = (float)(poncal + ponexafin + pontrafin);
    printf("LA NOTA DEL ALUMNO ES: %.2f\n", nota);
    return 0;
}
