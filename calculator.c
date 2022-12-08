#include <stdio.h>
#include <conio.h>

int main()
{
    float num1;
    float num2;
    char operation;
    float result;
    printf("Enter the first number: \t");
    scanf("%f", &num1);
    printf("Enter the operation:\t");
    scanf(" %c", &operation);
    printf("Enter the second number:\t");
    scanf("%f", &num2);
    switch (operation)
    {
    case '+':
        printf("Result: %.2f", num1 + num2);
        break;
    case '-':
        printf("Result: %.2f", num1 - num2);
        break;
    case '*':
        printf("Result: %.2f", num1 * num2);
        break;
    case '/':
        printf("Result: %.2f", num1 / num2);
        break;

    default:
        printf("Invalid Input");
        break;
    }
    getch();
    return 0;
}