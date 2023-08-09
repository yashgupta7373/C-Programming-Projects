// Simple Calculator...

#include <stdio.h>

// print menu of the calculator...
void Menu()
{
    printf("\n\nSelect an operation to perform the calculator: \n");
    printf("1. Addition(+) \t\t 2. Subtraction(-) \n3. Multiplication(*) \t 4. Division(/) \n6. Exit(x)\n\n");
}

// set a operation...
char setOperator()
{
    char operator;
    printf("Please, Select an operator form Menu: ");
    scanf("%s", &operator);
    return operator;
}

// set first number...
float setNumber1()
{
    float number1;
    printf("Enter a number: ");
    scanf("%f", &number1);
    return number1;
}

// set second number...
float setNumber2()
{
    float number2;
    printf("Enter another number: ");
    scanf("%f", &number2);
    return number2;
}

// calculate result...
float Calculate(float *num1, float num2, int operator)
{
    float temp = *num1;
    switch (operator)
    {
    case '+':
        *num1 = *num1 + num2;
        printf("Addition of %.2f and %.2f is %.2f \n\n", temp, num2, *num1);
        break;
    case '-':
        *num1 = *num1 - num2;
        printf("Subtraction of %.2f and %.2f is %.2f \n\n", temp, num2, *num1);
        break;
    case '*':
        *num1 = *num1 * num2;
        printf("Multiplication of %.2f and %.2f is %.2f \n\n", temp, num2, *num1);
        break;
    case '/':
        *num1 = *num1 / num2;
        printf("Division of %.2f and %.2f is %.2f \n\n", temp, num2, *num1);
        break;
    case 'x':
        printf("!!! Thank You !!!");
        break;
    default:
        printf("Please enter right operation....\n");
    }
    return *num1;
}

// main function...
int main()
{
    float number1 = 0, number2;
    char operator;

    Menu(); // Call Menu();

    number1 = setNumber1();

    do
    {
        operator= setOperator();
        if (operator!= 'x')
        {
            number2 = setNumber2();
            Calculate(&number1, number2, operator);
        }
        else
        {
            printf("!!! Thank You !!!");
        }

    } while (operator!= 'x');

    return 0;
}
