
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,*dir_num,cont=0;
	
	printf("Digite un numero: "); 
	scanf("%d",&numero);
	
	dir_num = &numero; 
	
	
	for(int i=1;i<*dir_num;i++){
		if(*dir_num%i == 0){
			cont++;
		}
	}
	
	if(cont>2){
		printf("%d","El numero no es primo ",*dir_num);
	}
	else{
		printf("%d","El numero ES PRIMO ",*dir_num);
		printf("%d","Direccion: ",&dir_num);
	
	
	
	getch();
	return 0;
}
}
