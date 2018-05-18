#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int nElementos,numeros[100],*dir_numeros,menor=999999;
	
	printf("Digite el numero de elementos del arreglo: ");
	scanf("%d",&nElementos);
	
	for(int i=0;i<nElementos;i++){
		printf("digite un numero",i++);
		scanf("%d",numeros[i]);
	
		dir_numeros = numeros;
	
	for(int i=0;i<nElementos;i++){
		if(*dir_numeros < menor){
			menor = *dir_numeros;
		}
		dir_numeros++;
	}
	
	printf("%d","El menor elemento es: ");
	
	getch();
	return 0;
}
