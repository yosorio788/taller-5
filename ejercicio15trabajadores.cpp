#include <stdio.h>
#include <stdlib.h>

char const l=100;
struct trabajadores{
    char nombre[30];
	int salario;	
};
trabajadores trabajador[l], *pTrabajador=trabajador;
void salario();
int main(){
	salario();
	
	return 0;
}

void salario(){
	int a,total=0,base;
	printf("numero de trabajadores: ");
	scanf("%d",&a);
	for(int i=0; i<a ;i++){
		printf("digite su nombre porfavor ");
		fflush(stdin);
		fgets(trabajador[i].nombre,30,stdin);
		printf("digite su salario : ");
		scanf("%d",&trabajador[i].salario);
		
		}
		system("cls");
		
		
	for(int i=0; i<a; i++){
        if(trabajador[i].salario>aux){
            total = trabajador[i].salario;
            base=i;
        }
    }
    printf("\n Trabajador de mayor paga su nombre es : %s ",(pTrabajador+base)->nombre);
		
	printf("\n su salario es de : %d ",(pTrabajador+base)->salario);
	printf("\n");
	
		for(int i=0; i<a; i++){
        if(trabajador[i].salario<aux){
            total = trabajador[i].salario;
            base=i;
        }
    }
    printf("\n Trabajador de menor salio es : %s ",(pTrabajador+base)->nombre);
		
	printf("\n su salario es de : %d ",(pTrabajador+base)->salario);
}
