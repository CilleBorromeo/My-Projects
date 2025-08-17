#include <stdio.h>

 
int main() {
	

	int age;

	printf("========Problem 1========\n\n");
	printf("Enter your age:") ;
	scanf("%d", &age);
	
	if (age >= 18){
		printf ("\nYou are eligible to vote.\n\n");
	}else{
        printf("\nYou are not eligible to vote.\n\n");
	}
	
	
	int num;

	printf("========Problem 2========\n\n");
	printf("Enter a number:") ;
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf ("\n%d is an EVEN number.\n\n", num);
	}else{
        printf("\n%d is an ODD number.\n\n", num);
	}
	
	

	int choice;
	float temp, convrt;
	
	
	
	printf("========Problem 3========\n\n");
	printf("Temperature converter\n") ;
	printf("1. Farenheit to Celsius\n") ;
	printf("1. Celsius to Farenheit\n") ;
	printf("Enter your Choice (1 or 2):");
	scanf("%d", &choice);
	
	if (choice == 1){
		printf("Enter temperature in Farenheit:");
	    scanf("%f", &temp);
		convrt =  (temp - 32)*(5.0/9.0);
		printf("%.2f Fahrenheit is %.2f Celsius.\n\n", temp, convrt);
	
	
	}else if (choice == 2){
		printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convrt = ((temp*(9.0/5.0))+32);
        printf("%.2f Celsius is %.2f Fahrenheit.\n\n", temp, convrt);
	}else{ printf("Invalid choice. Please run the program again and enter 1 or 2.\n");
	}
		

    int grade;
	printf("========Problem 4=======\n\n");
    printf("Enter your final grade (0-100): ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid grade.\n");
    } else {
        if (grade >= 75) {
            if (grade >= 90) {
                printf("Excellent\n");
            } else if (grade >= 80) {
                printf("Very Good\n");
            } else {
              
                printf("Passed\n");
            }
        } else {
            printf("Failed\n");
            printf("========================\n\n\n\n\n\n");
        }
    }
	
	
	
	
	
	
	
	
	return 0;
}