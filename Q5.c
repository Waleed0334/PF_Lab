#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else
        return 0;
}

int main() {

    float (*func[4])(float, float) = { add, subtract, multiply, divide };

    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result: %.2f\n", func[0](num1, num2));
            break;

        case '-':
            printf("Result: %.2f\n", func[1](num1, num2));
            break;

        case '*':
            printf("Result: %.2f\n", func[2](num1, num2));
            break;

        case '/':
            printf("Result: %.2f\n", func[3](num1, num2));
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
