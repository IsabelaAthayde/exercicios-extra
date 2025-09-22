#include <stdio.h>

int getTheBiggest(num) {
	int i, bigger = 0;
	
	for (i = 0; num > 0; i++)
	{
		if ((num % 10) > bigger) {
			bigger = num % 10;
		}
		num /= 10;
	};
	
	return bigger;
}

int main() {
	int n1, biggerN1;
	int n2, biggerN2;
	int result;
	
	printf("1- Digite um número de 1 a 999: ");
	scanf("%d", &n1);
	
	if (n1 < 1 || n1 > 999) {
		printf("Nao foi possivel seguir com o programa. Escolha somente numeros de 1 a 999.");	
		return;
	}	
	
	printf("2- Digite novamente um número 1 a 999: ");
	scanf("%d", &n2);	
	
	if (n2 < 1 || n2 > 999) 
	{
		printf("Nao foi possivel seguir com o programa. Escolha somente numeros de 1 a 999.");	
		return 0;
	}
	system("cls");
	
//	Possibilidade n°1:
//	biggerN1 = getTheBiggest(n1);
//	biggerN2 = getTheBiggest(n2);
//	
//	result = (biggerN1 > biggerN2) ? biggerN1 - biggerN2 : biggerN2 - biggerN1;

//	Possibilidade n°2:
	int diff = getTheBiggest(n1) - getTheBiggest(n2);
	printf("\n\n%d\n", diff);
	diff = diff < 0 ? -diff : diff;
	
//	printf("O maior algarismo do numero %d: %d \nO maior algarismo do numero %d: %d", n1, biggerN1, n2, biggerN2);
	printf("\n\nA diferenca entre os maiores algarismos de cada numero: %d", diff);
	
	return result;
}
