#include <stdio.h>

//Algoritmo que lê a idade de uma pessoa e a devolve em quantidade de dias vividos.

int main(){
	int a,m,d;

	printf ("Escreva sua idade em anos: ");
	scanf ("%d", &a);

	printf ("Agora em meses: ");
	scanf ("%d", &m);

	printf ("Por fim, sua idade somente em dias: ");
	scanf ("%d", &d);

	d = d + (a * 365) + (m * 30);
    
	printf ("Sua idade em dias é %d.",d);

}