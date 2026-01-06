#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter first value :");
    scanf("%d", &a);

    printf("Enter second value :");
    scanf("%d", &b);

    printf("Enter operater +,-,*,/ :");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("sum of a + b = %d", a + b);
        break;
    case '-':
        printf("sub. of a - b = %d", a - b);
        break;
    case '*':
        printf("Multi. of a * b = %d", a * b);
        break;
    case '/':
        printf("Div. of a / b = %d", a / b);
        break;

    default:
        printf("Invalid Op.");
        break;
    }
}