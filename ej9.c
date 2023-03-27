#include <stdio.h>

int main (void){
	int padre = 50;
	int hijo = 20;
	int years = 0;
	while(padre != (hijo * 2)){
		padre++;
		hijo++;
		years++;
	}
	printf("Pasaran %d años", years);
}
