	#include <stdio.h>
	
int is_valid(int *num1){
	while((*num1) <= 0){
	printf("La cantidad ingresada es invalida\n");
	scanf("%d", num1);
	}
	return 0;
}

int main (void) {
	int precio_dolar, pesos;
	printf("Ingrese la cantidad de pesos a convertir\n");
	scanf("%d", &pesos);
	is_valid(&pesos);
	printf("Ingrese el tipo de cambio\n");
	scanf("%d", &precio_dolar);
	is_valid(&precio_dolar);
	float dolares = pesos / precio_dolar;
	printf("Se pueden comprar %.2f dolares\n", dolares);
}
