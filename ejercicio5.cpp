#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordenarNumeros(int *,int);
void mostrarArregloOrdenado(int *,int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	ordenarNumeros(elemento,nElementos);	
	mostrarArregloOrdenado(elemento,nElementos);
	
	delete[] elemento;
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de elementos: ");
	scanf("%d",&nElementos);

	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		printf("digite un numero",i);
		scanf("%d",*elemento+1);
		
	}
}

void ordenarNumeros(int *elemento,int nElementos){
	int aux;
	
	
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArregloOrdenado(int *elemento,int nElementos){
	printf("\n\nMostrando Arreglo Ordenado: ");
	for(int i=0;i<nElementos;i++){
		scanf("%d",*elemento+1);
		
		
		
	}
}
