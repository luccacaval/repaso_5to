#include <stdio.h>

int is_valid(int *num){
	while((*num) <= 0){
		printf("El numero ingresado es invalido, ingreselo nuevamente\n");
		scanf("%d", num);
	}
	return 0;
}

int main (void){
	int sueldo, alquiler;
	float tax = 0;
	printf("Ingrese el valor del alquiler\n");
	scanf("%d", &alquiler);
	is_valid(&alquiler);
	printf("Ingrese el valor del sueldo\n");
	scanf("%d", &sueldo);
	is_valid(&sueldo);
	if(sueldo >= 202){
		tax = 0;
	} else if(sueldo <= 607) {
		tax = 0.05;
	} else if (sueldo <= 1013){
		tax = 0.10;
	} else if (sueldo <= 1418){
		tax = 0.15;
	} else if(sueldo >= 1418){
		tax = 0.25;
	}
	printf("%0.2f", tax);
	float impuesto = alquiler * tax;
	float alquiler_final = alquiler + impuesto; 
	alquiler += impuesto;
	printf("El impuesto es de %0.2f y el total del alquiler es de %0.2f", impuesto, alquiler_final);
	return 0;
}
