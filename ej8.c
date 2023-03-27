#include <stdio.h>

int is_valid(int *num1){
	while((*num1) <= 0){
		printf("El monto ingresado es invalido\n");
		scanf("%d %d", num1);
	}
	return 0;
}

int main (void){
	int dinero_inicio, meses;
	printf("Ingrese el dinero con el que comienzo\n");
	scanf("%d", &dinero_inicio);
	is_valid(&dinero_inicio);
	float dinero_final = dinero_inicio + (dinero_inicio * 0.02);
	printf("Luego de un mes tendra %0.2f", dinero_final);
	return 0;		
}
