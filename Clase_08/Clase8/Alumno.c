#include <stdio.h>
#include "Alumno.h"
#include <string.h>

sAlumno pedirAlumno()
{
    sAlumno alumnito;

    printf("Ingrese legajo: ");
    scanf("%d",&alumnito.legajo);
    printf("\nIngrese su nombre: ");
    fflush(stdin);
    gets(alumnito.nombre);
    printf("\nIngrese su promedio: ");
    scanf("%f",&alumnito.promedio);
    printf("\nIngrese edad: ");
    scanf("%d",&alumnito.edad);

    return alumnito; // devuelve una copia de los valores
}



void mostrarUnAlumno(sAlumno miAlumno) //paso un parametro y componen 3 datos la estructura, se pasa un alumno
{
    printf("%d--%s--%.2f--%d\n",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio,miAlumno.edad);
}



void cargarListadoDeAlumnos(sAlumno listado[],int tam ) //recibe array , recibe tamaño
{
    int i;
    for(i=0; i<tam ; i++)
    {
        listado[i]=pedirAlumno();


    }

}



void mostrarListadoDeAlumnos(sAlumno listado[],int tam )
{
    int i;
    for( i=0; i<tam ; i++) //BUSCAR un alumno
    {
        mostrarUnAlumno(listado[i]); //2Parametro actual
    }


}



void ordenarListadoDeAlumnosPorNombre(sAlumno listado[],int tam)
{
    sAlumno auxAlumno;
    int i;
    int j;

    for(i=0 ; i<tam-1 ; i++)
    {
        for(j=i+1 ; j<tam ; j++)
        {
            if(strcmp(listado[i].nombre,listado[j].nombre)>0)   //criterio con el cual voy a arreglar el array,comparamos 2 nombres
            {



              auxAlumno= listado[i];
              listado[i]=listado[j];
              listado[j]=auxAlumno;





               /* //no hacer swap campo por campo
                auxInt = listado[i].legajo;
                listado[i].legajo = listado[i].legajo;
                listado[j].legajo = auxInt;*/

            }
        }
    }

}



