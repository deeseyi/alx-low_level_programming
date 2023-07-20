#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
long long largest_prime_factor(long long num) {
    long long largest_factor = -1;
    
    // Remove all factors of 2
    while (num % 2 == 0) {
        largest_factor = 2;
        num /= 2;
    }
    
    // Check for odd factors starting from 3
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest_factor = i;
            num /= i;
        }
    }
    
    // If the remaining number is greater than 2, it is a prime factor
    if (num > 2) {
        largest_factor = num;
    }
    
    return largest_factor;
}

int main() {
    long long number = 612852475143;
    long long result = largest_prime_factor(number);
    
    printf("%lld\n", result);
    
    return 0;
}
