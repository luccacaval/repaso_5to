#include <stdio.h>

int is_valid(int *num1){
	while((*num1) <= 0){
		printf("El monto ingresado es invalido\n");
		scanf("%d", num1);
	}
	return 0;
}

int main (void){
	int sueldo, venta1, venta2, venta3;
	double comision, total;
	printf("Ingrese el monto del sueldo base\n");
	scanf("%d", &sueldo);
	is_valid(&sueldo)
	printf("Ingrese los montos de las 3 ventas \n");
	scanf("%d", &venta1);
	is_valid(&venta1);
	scanf("%d", &venta2);
	is_valid(&venta2);
	scanf("%d", &venta3);
	is_valid(&venta3);
	comision = (venta1 + venta2 + venta3) * 0.10;
	total = sueldo + comision;
	printf("EL sueldo final es de %0.2f\n y %0.2f proviene de las comisiones\n", total);
	return 0;
}
