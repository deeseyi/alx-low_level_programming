#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Either 0 or 1.
 */

void _putchar(char c) {
    putchar(c);
}

int _isupper(int c)
{
    if (isupper(c)) {
        return (1);
    } else {
        return (0);
    }
}

int _isdigit(int c)
{
    if (isdigit(c)) {
        return (1);
    } else {
        return (0);
    }
}

int mul(int a, int b)
{
    return (a * b);
}

void print_numbers(void)
{
    int i;
    for (i = 0; i < 10; i++) {
        putchar(i + '0');
    }
     _putchar('\n');
}

void print_most_numbers(void)
{
    int i;
    for (i = 0; i < 10; i++) {
        if (i != 2 && i != 4) {
            putchar(i + '0');
        }
    }
    _putchar('\n');
}

void more_numbers(void)
{
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            printf("%d", j);
        }
         printf("\n");
    }
}

void print_line(int n) {
    if (n <= 0) {
        _putchar('\n');
    } else {
        for (int i = 0; i < n; i++) {
            _putchar('_');
        }
        _putchar('\n');
    }
}

void print_diagonal(int n) {
    if (n <= 0) {
        _putchar('\n');
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
}

void print_square(int size)
{
    if (size <= 0) {
        _putchar('\n');
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        for (int row = 1; row <= size; row++) {
            for (int space = 1; space <= size - row; space++) {
                _putchar(' ');
            }
            for (int hash = 1; hash <= row; hash++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

// void print_number(int n)
// {
//     if (n < 0) {
//         _putchar('-');
//     } else if (n > 9) {
//         print_number(n / 10);
//     } else {
//         _putchar('0' + n);
//     } 
// }

void print_digit(int n) {
    _putchar(n + '0');
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n >= 10) {
        print_number(n / 10);
    }

    print_digit(n % 10);
}