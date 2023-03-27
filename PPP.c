#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_valid(int *num1){
	while((*num1) <= 0 && (*num1) > 3){
		printf("El numero ingresado es invalido\n");
		scanf("%d", num1);
	}
	return 0;
}

int vueltas_res (int choise, int oponent){
	switch (choise){
		case 1 :
		if(oponent == 2){
			printf("La maquina eligio papel, usted pierde\n");
			return 0;
		} else if (oponent == 3){
			printf("La maquina eligio tijera, usted gana\n");
			return 1;
		} else{
			printf("La maquina eligio piedra, empate\n");
			return 0;
		} 
		break;
		
		case 2 :
		if(oponent == 2){
			printf("La maquina eligio papel, empate\n");
			return 2;
		} else if (oponent == 3){
			printf("La maquina eligio tijera, usted pierde\n");
			return 0;
		} else {
			printf("La maquina eligio piedra, usted gana\n");
			return 1;
		}
		break;
		
		case 3 :
		if(oponent == 2){
			printf("La maquina eligio papel, usted gana\n");
			return 1;
		} else if (oponent == 3){
			printf("La maquina eligio tijera, empate\n");
			return 2;
		} else {
			printf("La maquina eligio piedra, usted pierde\n");
			return 0;
		}
		break;	
	}
}

int game (void){
	srand(time(NULL));
	int vueltas_w = 0, vueltas_l = 0;
	while(vueltas_w - vueltas_l != 2 && vueltas_l - vueltas_w != 2){
	printf("Ganadas = %d Perdidas = %d \n", vueltas_w, vueltas_l);
	int oponent = rand() % 3 + 1;
	printf("%d\n", oponent);
	int choise;
	printf("Ingrese 1) Pidera 2) Papel 3)Tijera\n");
	scanf("%d", &choise);
	is_valid(&choise);
	int res = vueltas_res(choise, oponent);
	if(res == 0){
		vueltas_l++;	
	} else if (res == 1){
		vueltas_w++;
	}
	}
	if(vueltas_w > vueltas_l) return 1;
	else return 0;
}

int main (void){
	int rondas_w = 0, rondas_l = 0;
	while(rondas_w - rondas_l != 3 || rondas_l - rondas_w != 3) {
		if(game()){
			rondas_w++;
			printf("Ganaste esta ronda\n");
		} else{
			rondas_l++;
			printf("Perdiste esta ronda\n");
		}
	}
	if(rondas_w > rondas_l){
		printf("Ganaste el torneo\n");
		return 0;
	} else {
		printf("Perdiste el torneo\n");
	}
}
