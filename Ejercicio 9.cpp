/*Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void sumarMatrices(int **,int **,int,int);
void mostrarMatrizSuma(int **,int,int);

int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;

int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizSuma(puntero_matriz1,nFilas,nCol);
	
	
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	
	
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de filas: ");
	scanf("%d",&nFilas);
	printf("Digite el numero de columnas: ");
	scanf("%d",&nCol);
	
	
	puntero_matriz1 = new int*[nFilas]; 
	for(int i=0;i<nFilas;i++){
		puntero_matriz1[i] = new int[nCol]; 
	}
	
		printf("\nDigitando los elementos de la primera matriz: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("%d","digite un numero",[i][j]);
			;
			scanf(*(*(puntero_matriz1+i)+j));
		}
	}
	

	puntero_matriz2 = new int*[nFilas]; 
	for(int i=0;i<nFilas;i++){
		puntero_matriz2[i] = new int[nCol]; 
	}
	
	cout<<"\nDigitando los elementos de la segunda matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("%d","digite un numero",[i][j]);
			scanf(*(*(puntero_matriz2+i)+j); 
		}
	}
}

void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int nFilas,int nCol){
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);  
		}
	}
}

void mostrarMatrizSuma(int **putero_matriz1,int nFilas,int nCol){
	prinf("\nLa suma de ambas matrices es: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			scanf(*(*(puntero_matriz1+i)+j)," ");
		}
		printf("\n";
	}
}
