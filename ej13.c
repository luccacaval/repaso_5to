#include <stdio.h>

int is_valid(int *num1){
	while((*num1) <= 0){
		printf("El monto ingresado es invalido\n");
		scanf("%d", num1);
	}
	return 0;
}

int main (void){
	int precio;
	printf("Ingrese el precio antes del del descuento\n");
	scanf("%d", &precio);
	is_valid(&precio);
	precio *= 0.85;
	printf("Precio final = %d", precio);
	return 0;
}
