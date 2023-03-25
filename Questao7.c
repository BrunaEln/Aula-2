#include <stdio.h>

//Cálculo de valor final de veículo a cliente.

int main () {
	float auto, nvpreco;

	printf ("Preço de fábrica do automóvel: ");
	scanf ("%f", &auto);

	nvpreco = auto + (auto * 0.28) + (auto * 0.45);

	printf ("Com os reajustes aplicados o consumidor receberá o veículo valendo R$%f", nvpreco);
}

