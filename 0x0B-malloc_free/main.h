#ifndef MAIN_H
#define MAIN_H

char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *strdup(char *str);
char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);

#endif
