#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

#endif /* MAIN_H */

