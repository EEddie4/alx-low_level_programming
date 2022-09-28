int _putchar(char c);
void _puts_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _is_prime_number(int n);
#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
/**
 * *void prototypes(void)
 * *int prototypes(int)
 * *char prototypes(char) 
 * */
int is_prime_number(int n);
int is_prime(int n, int start);
int is_palindrome(char *s);
int check_palindrome(char *s, int len, int index);
#endif /* MAIN_H */
