#include <stdio.h>

//Algoritmo para descobrir novo salário de funcionário.

int main () {
	float salario, nvsal; 
	int percent; 

	printf ("Digite o salário:\nR$ ");
	scanf ("%f", &salario);

	printf ("Agora digite o percentual de reajuste: ");
	scanf ("%d", &percent);

	nvsal = salario + (salario * (percent / 100));

	printf ("Com o reajuste de %d %% o salário passará a ser R$%f", percent, nvsal);
}
