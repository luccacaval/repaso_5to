#include <stdio.h>

int is_valid(int *num1){
	while((*num1) <= 0){
		printf("La cantidad de segundos ingresada es invalida\n");
		scanf("%d", num1);
	}
	return 0;
}

int main (void){
	int segundos, horas = 0, minutos = 0;
	printf("Ingrese una cantidad de segundos a convertir\n");
	scanf("%d", &segundos);
	is_valid(&segundos);
	while(segundos >= 3600){
		horas++;
		segundos -= 3600;
	}
	while(segundos >= 60){
		segundos -= 60;
		minutos++; 
	}
	printf("%d hs %d min", horas, minutos);
}
