#include <stdio.h>

int is_valid(int *num1, int *num2){
	while((*num1) > 23 || (*num2) > 60){
		printf("La hora ingresada es invalida, ingresela nuevamente\n");
		scanf("%d %d", num1, num2);
	}
	return 0;
}

int main (void){
	int minutos, horas, AM_PM;
	printf("Ingrese la hora a convertir\n");
	scanf("%d %d", &horas, &minutos);
	is_valid(&horas, &minutos);
	if(horas > 12){
		horas -= 12;
		AM_PM = 1;
	}
	printf("%d:%d %s", horas, minutos, AM_PM ? "PM" : "AM");
}
