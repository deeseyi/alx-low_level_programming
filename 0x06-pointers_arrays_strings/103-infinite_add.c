#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char* reverse_string(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int r_idx = 0;

    while (len1 > 0 || len2 > 0 || carry) {
        int digit1 = len1 > 0 ? n1[--len1] - '0' : 0;
        int digit2 = len2 > 0 ? n2[--len2] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;

        if (r_idx < size_r - 1) {
            r[r_idx++] = '0' + (sum % 10);
        } else {
            return 0;
        }
    }

    r[r_idx] = '\0';
    reverse_string(r);
    return r;
}
