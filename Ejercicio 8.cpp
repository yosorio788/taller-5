
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirDatos();
void contarVocales(char *);

char palabraUsuario[30];

int main(){
	pedirDatos();
	contarVocales(palabraUsuario);
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite una palabra: ");
	cin.getline(palabraUsuario,30,'\n');
	
	strupr(palabraUsuario); 
}

void contarVocales(char *palabra){
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*palabra){ 
		switch(*palabra){
			case 'A': contA++;break;
			case 'E': contE++;break;
			case 'I': contI++;break;
			case 'O': contO++;break;
			case 'U': contU++;break;
		}
		palabra++;
	}
	
	printf("%c","Numero de vocales A",contA);
	
	printf("%c","Numero de vocales E",contE);
	printf("%c","Numero de vocales I: ",contI);
	printf("%c","Numero de vocales O: ",contO);
	printf("%c","Numero de vocales U: ",contU);
}
