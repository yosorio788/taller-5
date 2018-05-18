

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[10], *dir_numeros;
	
	for(int i=0;i<10;i++){
		printf("digite un numero",i++);
		
		scanf("%d",numeros[i]);
	}
	
	dir_numeros = numeros; 
	
	for(int i=0;i<10;i++){
		if(*dir_numeros%2==0){
			printf("Numero par: ",*dir_numeros);
			printf("Posicion: ",&dir_numeros);
		}
		dir_numeros++;
	}
	
	
	getch();
	return 0;
}
