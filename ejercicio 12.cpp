#include<stdio.h>
#include<stdlib.h>


struct Etapa{
	int horas,min,seg;
}etapa[3], *puntero_etapa = etapa;

void pedirDatos();
void calcularTiempo(Etapa *);

int main(){
	pedirDatos();
	calcularTiempo(puntero_etapa);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	printf("Digite cada uno de los tiempos empleados: \n");	
	for(int i=0;i<3;i++){
		printf("numero de Horas: \n"); 
		scanf("%d",&(puntero_etapa+i)->horas);
		printf("Minutos:\n "); 
		scanf("%d",&(puntero_etapa+i)->min);
		printf("Segundos:\n "); 
		scanf("%d",&(puntero_etapa+i)->seg);
		
	}
	printf("\n");
}

void calcularTiempo(Etapa *puntero_etapa){
	int horasT=0,minutosT=0,segundosT=0;
	
	for(int i=0;i<3;i++){
		horasT += (puntero_etapa+i)->horas; 
		minutosT += (puntero_etapa+i)->min;
		if(minutosT >= 60){
			minutosT -= 60;
			horasT++;
		}
		segundosT += (puntero_etapa+i)->seg;
		if(segundosT >= 60){
			segundosT -= 60;
			minutosT++; 
		}
	}
	
	printf("\nEl tiempo total es: \n");
	printf("el total de Horas: %d\n",horasT);
	printf("el total de Minutos: %d\n",minutosT);
	printf("el total de Segundos:%d\n ",segundosT);
}
