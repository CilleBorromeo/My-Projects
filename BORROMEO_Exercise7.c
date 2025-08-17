#include <stdio.h>

int main() {
	
	int Grade;
	printf("==========Grade Remark==========\n");
	printf("Enter your Grade:");
	scanf ("%d", &Grade);
	
	if (Grade >= 90)
		printf("Excellent\n\n"); 
	else if (Grade >= 80 && Grade <= 89)
		printf("Very Good\n\n");
	else if (Grade >= 75 && Grade <= 79)
		printf("Good\n\n");
	else 
		printf("Fail\n\n");
		


    
    int num;
    printf("==========Sign Classification==========\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Positive\n\n");
    else if (num < 0)
        printf("Negative\n\n");
    else
        printf("Zero\n\n");

    
    int a, b, c;
    printf("==========Smallest of Three Numbers==========\n");
    printf("Enter three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
        printf("Smallest is: %d\n\n", a);
    else if (b <= a && b <= c)
        printf("Smallest is: %d\n\n", b);
    else
        printf("Smallest is: %d\n\n", c);


    float weight, height, bmi;
    printf("==========BMI Classification==========\n");
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    if (bmi < 18.5)
        printf("Underweight\n\n");
    else if (bmi >= 18.5 && bmi <= 24.9)
        printf("Normal\n\n");
    else if (bmi >= 25 && bmi <= 29.9)
        printf("Overweight\n\n");
    else
        printf("Obese\n\n");

  
    char light;
    printf("==========Traffic Light Simulation==========\n");
    printf("Enter traffic light (R/Y/G): ");
    scanf(" %c", &light);

    switch (light) {
        case 'R': printf("Stop\n\n"); break;
        case 'Y': printf("Ready\n\n"); break;
        case 'G': printf("Go\n\n"); break;
        default: printf("Invalid input\n\n"); break;
    }

  
    int month;
    printf("==========Month Name==========\n");
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: printf("January\n\n"); break;
        case 2: printf("February\n\n"); break;
        case 3: printf("March\n\n"); break;
        case 4: printf("April\n\n"); break;
        case 5: printf("May\n\n"); break;
        case 6: printf("June\n\n"); break;
        case 7: printf("July\n\n"); break;
        case 8: printf("August\n\n"); break;
        case 9: printf("September\n\n"); break;
        case 10: printf("October\n\n"); break;
        case 11: printf("November\n\n"); break;
        case 12: printf("December\n\n"); break;
        default: printf("Invalid month\n\n"); break;
    }


    int day;
    printf("==========Day of the Week==========\n");
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday\n\n"); break;
        case 2: printf("Tuesday\n\n"); break;
        case 3: printf("Wednesday\n\n"); break;
        case 4: printf("Thursday\n\n"); break;
        case 5: printf("Friday\n\n"); break;
        case 6: printf("Saturday\n\n"); break;
        case 7: printf("Sunday\n\n"); break;
        default: printf("Invalid day\n\n"); break;
    }

  
    double n1, n2;
    char op;
    printf("==========Simple Calculator==========\n");
    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &n2);

    switch (op) {
        case '+': printf("Result: %.2lf\n\n", n1 + n2); break;
        case '-': printf("Result: %.2lf\n\n", n1 - n2); break;
        case '*': printf("Result: %.2lf\n\n", n1 * n2); break;
        case '/': 
            if (n2 != 0)
                printf("Result: %.2lf\n\n", n1 / n2);
            else
                printf("Error: Division by zero\n\n");
            break;
        default: printf("Invalid operator\n\n"); break;
    }

    // Vowel or Consonant
    char ch;
    printf("==========Vowel or Consonant==========\n");
    printf("Enter a letter: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n\n"); break;
        default:
            printf("Consonant\n\n"); break;
    }

    // Menu Ordering System
    int choice;
    printf("==========Menu Ordering System==========\n");
    printf("1. Burger - $5\n");
    printf("2. Pizza - $8\n");
    printf("3. Pasta - $7\n");
    printf("4. Salad - $4\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("You ordered Burger ($5)\n\n"); break;
        case 2: printf("You ordered Pizza ($8)\n\n"); break;
        case 3: printf("You ordered Pasta ($7)\n\n"); break;
        case 4: printf("You ordered Salad ($4)\n\n"); break;
        default: printf("Invalid choice\n\n"); break;
    }

	return 0;
}