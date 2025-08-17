#include <stdio.h>



int main() {
	const double twentyFiveCentavos = 0.25;
	const double fiveCentavos = 0.05;
	const double oneCentavos = 0.01;
	const double onePeso = 1;
	const double fivePesos = 5;
	const double tenPesos = 10;
	const double twentyPesos = 20;
	
	int notwentyFiveCentavos, nofiveCentavos, nooneCentavos, noonePeso, nofivePesos, notenPesos, notwentyPesos;
	printf("== Welcome to my Coin Counter ==\n\n");
	printf("Number of 25 cents:");
		scanf("%d", &notwentyFiveCentavos); 
	printf("Number of 5  cents:");
		scanf("%d", &nofiveCentavos); 
	printf("Number of 1  cent :");
		scanf("%d", &nooneCentavos); 
	printf("Number of 1  peso :");
		scanf("%d", &noonePeso); 
	printf("Number of 5  peso :");
		scanf("%d", &nofivePesos); 
	printf("Number of 10 peso :");
		scanf("%d", &notenPesos); 
	printf("Number of 20 peso :");
		scanf("%d", &notwentyPesos); 
		

	double totalof25cents = notwentyFiveCentavos * twentyFiveCentavos;
    double totalof5cents = nofiveCentavos * fiveCentavos;
    double totalof1cent = nooneCentavos * oneCentavos;
    double totalof1peso = noonePeso * onePeso;
    double totalof5pesos = nofivePesos * fivePesos;
    double totalof10pesos =  notenPesos * tenPesos;
    double totalof20pesos = notwentyPesos * twentyPesos;
    
    double total =totalof25cents+totalof5cents+totalof1cent+totalof1peso+totalof5pesos+totalof10pesos+totalof20pesos;
    
    printf("\n\nYou have a total of: %.2f\n\n\n\n\n", total);

	printf("===========Summary==============\n");
	printf("Number of 25 cents entered: %d\n", notwentyFiveCentavos);
	printf("Total: %.2f\n",totalof25cents);
	printf("================================\n");
	printf("Number of 5 cents entered: %d\n", nofiveCentavos);
	printf("Total: %.2f\n",totalof5cents);
	printf("================================\n");
	printf("Number of 1 cent entered: %d\n", nooneCentavos);
	printf("Total: %.2f\n",totalof1cent);
	printf("================================\n");
	printf("Number of 1 peso entered: %d\n",noonePeso);
	printf("Total: %.2f\n",totalof1peso);
	printf("================================\n");
	printf("Number of 5 pesos entered: %d\n", nofivePesos);
	printf("Total: %.2f\n",totalof5pesos);
	printf("================================\n");
    printf("Number of 10 pesos entered: %d\n", notenPesos);
	printf("Total: %.2f\n",totalof10pesos);
	printf("================================\n");
	printf("Number of 20 pesos entered: %d\n", notwentyPesos);
	printf("Total: %.2f\n",totalof20pesos);
		
		
		

	return 0;
}