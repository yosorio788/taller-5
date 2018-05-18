#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void busqueda(int *,int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	busqueda(elemento,nElementos);
	
	delete[] elemento; 
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>nElementos;
	
	elemento = new int[nElementos]; 
	
	for(int i=0;i<nElementos;i++){
		printf("digite un numero");
	
		scanf("%d",*elemento+i);
	
	}
}

void busqueda(int *elemento,int nElementos){
	int dato,i;
	bool band=false;
	
	printf("\nDigite el numero que quiere buscar: ");
	scanf("%d",&dato);
	
	
	
	i=0;
	while((band==false)&&(i<nElementos)){
		if(*(elemento+i)==dato){ 
			band = true; 
		}
		i++;
	}
	
	if(band==false){
		
		printf("%d","el numero no ha sido encontrado",dato);
	}
	else{
		printf("%d","el numero ha sido encontrado",dato,i-1);
		
	}
}
