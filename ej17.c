#include <stdio.h>

int is_valid(int *num1){
	while((*num1) <= 0){
		printf("El numero ingresado es invalido\n");
		scanf("%d", num1);
	}
	return 0;
}

int is_valid_g(int *num1){
	while((*num1) != 0 && (*num1) != 1){
		printf("El numero ingresado es invalido\n");
		scanf("%d", num1);
	}
	return 0;
}

int main (void) {
	int edad, peso,genero;
	printf("Ingrese su genero\n0) Mujer 1) Hombre ");
	scanf("%d", &genero);
	is_valid_g(&genero);
	printf("Ingrese su edad\n");
	scanf("%d", &edad);
	is_valid(&edad);
	printf("Ingrese su peso\n");
	scanf("%d", &peso);
	is_valid(&peso);
	double FCM = ((210 - (0.5 * edad)) - peso *0.01);
	if(genero == 1) FCM += 4;
	printf("Su FCM es de %.2f", FCM);
}
