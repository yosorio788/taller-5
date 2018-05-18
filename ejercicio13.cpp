#include <stdio.h>
#include <stdlib.h>

int potencia(int, int);

int main(){
	int vector1[4], vector2[4], vector3[4], vector4[4];
	int *pVector1 = vector1, *pVector2 = vector2, *pVector3 = vector3, *pVector4 = vector4;
	int i;
	
	
	for(i = 0; i < 4; i++){
		printf("Ingrese un valor: ");
		scanf("%d", &(*(pVector1 + i)));
		printf("\n");
	}
	
	¿
	for(i = 0; i < 4; i++){
		*(pVector2 + i) = potencia(*(pVector1 + i), 2);
	}
	
	
	for(i = 0; i < 4; i++){
		*(pVector3 + i) = potencia(*(pVector1 + i), 3);
	}
	
	
	for(i = 0; i < 4; i++){
		*(pVector4 + i) = potencia(*(pVector1 + i), 4);
	}
	
	
	for(i = 0; i < 4; i++){
		printf("%d \t", *(pVector1 + i));
		printf("%d \t", *(pVector2 + i));
		printf("%d \t", *(pVector3 + i));
		printf("%d \t", *(pVector4 + i));
		printf("\n");
	}
	
	return 0;
}

int potencia(int base, int exponente){
	int i, potencia = 1;
	for(i = 0; i < exponente; i++){
		potencia *= base;
	}
	return potencia;
}
