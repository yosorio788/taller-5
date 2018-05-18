/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posicion de memoria 
donde se está guardando el número. Con punteros.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dir_numero;
	
	printf("Digite un numero: "); 
	scanf("%d",&numero); //Pedimos el numero al usuario
	
	dir_numero = &numero;
	
	if(*dir_numero%2==0){
		printf("%d","El numero", *dir_numero);
		printf("%d","posicion",dir_numero);
		//intf("Posicion: ",dir_numero,endl);//
	}
	else{
		printf("%d","elnumero es impar",*dir_numero);

	printf("%d","la posicion es",dir_numero);

	}
	
	getch();
	return 0;
}
