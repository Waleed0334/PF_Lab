#include <stdio.h>

void printValue(void *ptr, char type) {
    switch (type) {
        case 'i':
            printf("Integer Value: %d\n", *(int *)ptr);
            break;
            
        case 'f':
            printf("Float Value: %.2f\n", *(float *)ptr);
            break;
            
        case 'c':
            printf("Character Value: %c\n", *(char *)ptr);
            break;
            
        default:
            printf("Error: Unknown type specifier ('%c').\n", type);
            break;
    }
}

int main() {
    int num1 = 10;
    int num2 = 42;
    int num3 = -5;
    
    float fnum1 = 3.14f;
    float fnum2 = 1.0f / 3.0f;
    float fnum3 = 9.99f;
    
    char char1 = 'A';
    char char2 = '$';
    char char3 = 'z';

    printf("--- Printing Integers ---\n");
    printValue(&num1, 'i');
    printValue(&num2, 'i');
    printValue(&num3, 'i');

    printf("\n--- Printing Floats ---\n");
    printValue(&fnum1, 'f');
    printValue(&fnum2, 'f');
    printValue(&fnum3, 'f');
    
    printf("\n--- Printing Characters ---\n");
    printValue(&char1, 'c');
    printValue(&char2, 'c');
    printValue(&char3, 'c');
    
    printf("\n--- Printing Error ---\n");
    printValue(&num1, 'x');

    return 0;
}