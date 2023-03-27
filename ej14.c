#include <stdio.h>

int main (void){
	int num;
	int abs;
	printf("Ingrese un nro\n");
	scanf("%d", &num);
	if(num < 0){
		abs = num * -1;
	} else {
		abs = num;
	}
	printf("Valor absoluto de %d = %d\n", num,abs);
}
