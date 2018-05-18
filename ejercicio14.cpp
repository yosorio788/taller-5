#include <stdlib.h>
#include <stdio.h>

struct Competidor{
	char nombre[35], club[35],sexo[10];
	int edad;
	
} jugador;

compe *jjugador=&jugador;


void ingresar();
void categoria();



int main(){
	
   ingresar();
   return 0;
}
void ingresar(){
	printf ("ingrese el nombre del jugador.\n");
    fflush (stdin);
    fgets(jugador.nombre,30,stdin);
    printf ("Ingrese su edad.\n");
    scanf("%d",&jugador.edad);
    printf ("Ingrese su sexo.\n");
    fflush (stdin);
    fgets(jugador.sexo,15,stdin);
    printf ("Ingrese su club.\n");
    fflush (stdin);
    fgets(jugador.club,30,stdin);
  

	printf ("el nombre del jugador es  %s ",(jjugador->nombre));
	printf ("\n la edad del jugador es  %d ",(jjugador->edad));
	printf ("\n el club del jugador es  %s ",(jjugador->club));
	printf("su categoria es: "); categoria();



}

void categoria(){
	if (players.edad>30){
		printf("mayor");
	}else if (players.edad<30&&players.edad>15){
	   printf("Joven");
	}else{
	  printf("Infantil");
	}
}
