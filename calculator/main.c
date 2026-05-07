#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float divide(float a, float b) {
    if (b == 0 && a == 0) {
        printf("ERROR!!\n");
        return 0;
    }

    return a / b;
}

float multiply(float a, float b) {
    return a * b;
}

int main() {
    float a;
    float b;
    float result;
    int choice;

    while(1) {

        printf("=== CALCULATOR === \n\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Divide\n");
        printf("4. Multiply\n");
        printf("5. Exit\n\n");

        if (scanf("%i", &choice) != 1) {
            while (getchar() != '\n');
            printf("ERROR!!\n\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("First Number: ");
                scanf("%f", &a);

                printf("Second Number: ");
                scanf("%f", &b);

                result = add(a, b);
                printf("RESULT: %.2f\n\n", result);
                break;

            case 2:
                printf("First Number: ");
                scanf("%f", &a);

                printf("Second Number: ");
                scanf("%f", &b);

                result = subtract(a, b);
                printf("RESULT: %.2f\n\n", result);
                break;

            case 3:
                printf("First Number: ");
                scanf("%f", &a);

                printf("Second Number: ");
                scanf("%f", &b);

                result = divide(a, b);
                printf("RESULT: %.2f\n\n", result);
                break;

            case 4:
                printf("First Number: ");
                scanf("%f", &a);

                printf("Second Number: ");
                scanf("%f", &b);
            
                result = multiply(a, b);
                printf("RESULT: %.2f\n\n", result);
                break;

            case 5:
                printf("GOODBYE!!\n");
                return 0;

            default:
                printf("ERROR!!\n\n");
                break;
        }
    }

    return 0;
}