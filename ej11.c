#include <stdio.h>

int is_valid(int *num1){
	while((*num1) <= 0){
		printf("La calificacion ingresada es invalida\n");
		scanf("%d", num1);
	}
	return 0;
}

int main (void){
	int par1,par2,par3,tp,ev;
	double prom, total;
	printf("Ingrese las 3 calificaciones parciales \n");
	scanf("%d", &par1);
	is_valid(&par1)
	scanf("%d", &par2);
	is_valid(&par2)
	scanf("%d", &par3);
	is_valid(&par3)
	printf("Ingrese la nota del TP\n");
	scanf("%d", &tp);
	printf("Ingrese la nota de la evaluacion\n");
	scanf("%d", &ev);
	prom = (par1 + par2 + par3) / 3;
	total = prom * 0.55 + ev * 0.30 + tp * 0.15;
	printf("La nota final es %0.2f\n", total);
	return 0; 
}
