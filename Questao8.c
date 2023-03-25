#include <stdio.h>

//Cálculo do salário final de um funcionário que recebe comissão.

int main () {
	char nome;
	int car;
	float venda, sal, cf, SalAtt;
	
    printf ("Diga-me o seu nome: ");
	scanf ("%s", &nome);
	
    printf ("%s digite o total de carros vendidos por você este mês: ", nome);
	scanf ("%d", &car);
	
    printf ("Digite o valor total de suas vendas:\nR$ ");
	scanf ("%f", &venda);
	
    printf ("Agora digite o seu salário fixo:\nR$ ");
	scanf ("%f", &sal);
	
    printf ("Por fim digite o valor de sua comissão fixa por carro vendido:\nR$ ");
	scanf ("%f", &cf);
	
    SalAtt = sal + cf + (venda * 0.05);
	
    printf ("%s seu salário atualizado para este mês é R$ %f.", nome, SalAtt);
}
