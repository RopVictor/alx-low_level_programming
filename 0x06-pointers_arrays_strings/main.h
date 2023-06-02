#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *cap_string(char *);
char *string_toupper(char *);
char *rot13(char *);
void print_number(int n);
void print_buffer(char *b, int size);
/* Function prototypes */
void function1();
int function2(int arg1, double arg2);
char function3(char* str);
void function4(int arr[], int size);

/* putchar function */
int _putchar(char c);
#endif /* MAIN_H */
