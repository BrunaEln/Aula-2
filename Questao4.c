#include <stdio.h>

//Algoritmo para ler as dimensões de um retângulo, calcular e escrever a área do retângulo. 

int main () {
	float base, alt, area;

	printf ("Digite o valor da base do retângulo:\n ");
	scanf ("%f", &base);

	printf ("Agora digite o valor da altura: \n ");
	scanf ("%f", &alt);

	area = base * alt;
    
	printf ("Com a base valendo %f cm e a altura %f cm a área deste retângulo equivale a %f.", base, alt, area);
}