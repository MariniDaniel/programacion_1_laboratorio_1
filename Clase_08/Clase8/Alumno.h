#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct
{

    int legajo;
    char nombre[30];
    float promedio;
    int edad;

} sAlumno;
sAlumno pedirAlumno();

void mostrarUnAlumno(sAlumno);
void mostrarListadoDeAlumnos(sAlumno[],int tam );
void ordenarListadoDeAlumnosPorNombre(sAlumno[],int tam);
void cargarListadoDeAlumnos(sAlumno[],int tam);


#endif // ALUMNO_H_INCLUDED
