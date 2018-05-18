#include <stdlib.h>
#include <stdio.h>

struct estudiante{
	char nombre[30],sexo[10];
	int edad;	
};


struct promedio{
	float notas[3];
	estudiante datos;
}promedito;

promedio* pProm=&promedito;
void pedir_datos();
void mostrar_datos();
float suma=0;
int main(){
	pedir_datos();
	promedio();
	mostrar_datos();
	
	return 0;
}



void pedir_datos(){
	int suma=0;
printf("Ingrese el nombre del estudiante : ");
fflush(stdin);
fgets(promedito.datos.nombre,30,stdin);
printf("Ingrese el sexo del estudiante : ");
fflush(stdin);
fgets(promedito.datos.sexo,15,stdin);
printf("Ingrese la edad del estudiante : ");
scanf("%d",&promedito.datos.edad);

for(int i=0;i<3;i++){
printf("Ingrese la nota #%d : ",i+1);
scanf("%f",&promedito.notas[i]);	
}

}

void mostrar_datos(){
	float promedio1, suma=0;
printf("\n El nombre del estudiante : %s",pProm->datos.nombre);
printf("\n El sexo del estudiante : %s",pProm->datos.sexo);
printf("\n Ingrese la edad del estudiante : %d", pProm->datos.edad);
for(int i=0;i<3;i++){
printf("\n La nota #%d : %.1f",i+1,promedito.notas[i]);
}	
for(int i=0;i<3;i++){
	suma+=promedito.notas[i];
}
promedio1=suma/3;
printf("\n El promedio del alumno es:  %.1f",promedio1);
}
