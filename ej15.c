#include <stdio.h>

int is_valid(int *num1){
	while((*num1) <= 0){
		printf("La cantidad ingresada es invalida\n");
		scanf("%d", num1);
	}
	return 0;
}

int main (void) {
	int hombres, mujeres;
	printf("Ingrese la cantidad de mujeres\n");
	scanf("%d", &mujeres);
	is_valid(&mujeres);
	printf("Ingrese la cantidad de hombres\n");
	scanf("%d", &hombres);
	is_valid(&hombres);
	double total = hombres + mujeres;
	double por_h = (hombres / total) * 100;
	double por_m = (mujeres / total) * 100;
	printf("Porcentaje de hombres = %.2f\nPorcentaje de mujeres = %.2f ", por_h, por_m);
	return 0;
}
