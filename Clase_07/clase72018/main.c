#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

void ordenarAlumnos(int leg[],char nombres[] [20], char sex[], int pp[], int sp[], float prom[], int tam);

int main()
{
    int legajos[TAM];
    int pp[TAM];
    int sp[TAM];
    float promedios[TAM];
    char nombres[TAM][20];
    char sexos[TAM];

    int autoLeg=0;
    for(int i=0; i<TAM; i++)
    {
        legajos[i]=autoLeg;
        autoLeg++;
       /* printf("Ingrese su legajo: ");
        scanf("%d",&legajos[i]);*/

        printf("Ingrese su nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("ingrese su sexo m/f : ");
        fflush(stdin);
        scanf("%c",&sexos[i]);
        printf("Ingrese su nota del primer parcial: ");
        fflush(stdin);
        scanf("%d",&pp[i]);
        printf("Ingrese su nota del segundo parcial: ");
        fflush(stdin);
        scanf("%d",&sp[i]);
        promedios[i]=(float)(pp[i]+sp[i])/2;
        system("pause");
        system("cls");
    }

    for(int i=0; i<TAM; i++)
    {
        printf("\nSu nombre es %s",nombres[i]);
        printf("\nSu legajo es %d",legajos[i]);
        printf("\nSu sexo es %c",sexos[i]);
        printf("\nSu nota del primer parcial es %d",pp[i]);
        printf("\nSu nota del segundo parcial es %d",sp[i]);
        printf("\nSu promedio final es %2.f",promedios[i]);

    }

    ordenarAlumnos(legajos,nombres,sexos,pp,sp,promedios,TAM);

    printf("\n\n");

    for(int i=0; i<TAM; i++)
    {
        printf("\nSu nombre es %s",nombres[i]);
        printf("\nSu legajo es %d",legajos[i]);
        printf("\nSu sexo es %c",sexos[i]);
        printf("\nSu nota del primer parcial es %d",pp[i]);
        printf("\nSu nota del segundo parcial es %d",sp[i]);
        printf("\nSu promedio final es %2.f",promedios[i]);

    }

    return 0;
}


void ordenarAlumnos(int leg[],char nombres[] [20], char sex[], int pp[], int sp[], float prom[], int tam)
{

    int auxInt;
    float auxFloat;
    char auxChar;
    char auxCad[20];

    for(int i=0; i < tam -1 ; i++)
    {
        for(int j=1; j<tam; j++)
        {
            if(prom[i]<prom[i])
            {


                auxInt = leg[i];
                leg[i] = leg[j];
                leg[j] = auxInt;

                auxInt = pp[i];
                pp[i] = pp[j];
                pp[j] = auxInt;

                auxInt = sp[i];
                sp[i] = sp[j];
                sp[j] = auxInt;

                auxFloat = prom[i];
                prom[i] = prom[j];
                prom[j] = auxFloat;

                auxChar = sex[i];
                sex[i] = sex[j];
                sex[j] = auxChar;

                strcpy(auxCad,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxCad);
            }
        }
    }



}
