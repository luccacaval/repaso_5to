#include <stdio.h>

int main(int argc, char const *argv[]) {
  int alumnos, costo_total;
  double costo_alum;
  
  printf("Ingrese la cantidad de alumnos\n");
  scanf("%d", &alumnos);
  if(alumnos >= 100) {
  	costo_alum = 500;
  	costo_total = costo_alum * alumnos;
  } else if (alumnos >= 50){
  	costo_alum = 400;
  } else if (alumnos >= 30){
  	costo_alum = 300;
  } else {
  	costo_total = 6000;
  	costo_alum = costo_total / alumnos;
  }
  printf("El costo por alumno es de %0.2f y el costo total es de %d\n", costo_alum, costo_total);
  return 0;
}
