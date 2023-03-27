#include<stdio.h>

int main (void){
	int from, to;
	printf("Ingrese el rango de numeros \n");
	scanf("%d %d", &to, &from);
	while(to < from) {
		if(to % 2 == 0){
			printf("%d ", to);
		}
		to++;
	}
	return 0;
}
