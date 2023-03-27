#include <stdio.h>

int main (void){
	int sueldo, venta1, venta2, venta3;
	double comision, total;
	printf("Ingrese el monto del sueldo base\n");
	scanf("%d", &sueldo);
	printf("Ingrese los montos de las 3 ventas \n");
	scanf("%d %d %d", &venta1, &venta2, &venta3);
	comision = (venta1 + venta2 + venta3) * 0.10;
	total = sueldo + comision;
	printf("EL sueldo final es de %0.2f\n y %0.2f proviene de las comisiones", total);
	return 0;
}
