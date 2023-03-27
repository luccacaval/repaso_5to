#include <stdio.h>

int main (void){
	int par1,par2,par3,tp,ev;
	double prom, total;
	printf("Ingrese las 3 calificaciones parciales \n");
	scanf("%d %d %d", &par1, &par2, &par3);
	printf("Ingrese la nota del TP");
	scanf("%d", &tp);
	printf("Ingrese la nota de la evaluacion");
	scanf("%d", &ev);
	prom = (par1 + par2 + par3) / 3;
	total = prom * 0.55 + ev * 0.30 + tp * 0.15;
	printf("La nota final es %0.2f", total);
	return 0; 
}
