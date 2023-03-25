#include <stdio.h>

//Cálculo de média ponderada de aluno.

int main () {
	char nome;
	float n1, n2, n3, MF;

	printf ("Seu nome: ");
	scanf ("%s", nome);

	printf ("%s digite sua primeira nota: ");
	scanf ("%f", n1);

	printf ("%s digite sua segunda nota: ");
	scanf ("%f", n2); 

	printf (" Agora digite sua terceira nota: ");
	scanf ("%f", n3);

	MF = (n1 * 2) + (n2 * 3) + (n3 * 5) / (2 + 3 + 5);

	printf ("%s a sua média final é de %f.", nome, MF);
}