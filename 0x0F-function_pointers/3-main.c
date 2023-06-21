#include <stdlib.h>
#include <stdio.h>


/**
 * main - Prints the simple operations.
 * @argc: number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0
 */

nt add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

typedef int (*operation)(int, int);

operation get_op_func(char op) {
    switch (op) {
        case '+':
            return add;
        case '-':
            return subtract;
        case '*':
            return multiply;
        case '/':
            return divide;
        default:
            return NULL;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    char op = argv[2][0];
    int num2 = atoi(argv[3]);

    operation op_func = get_op_func(op);
    if (op_func == NULL || argv[2][1] != '\0') {
        printf("Error: Invalid operator\n");
        return 1;
    }

    printf("Result: %d\n", op_func(num1, num2));
    return 0;
}
