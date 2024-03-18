#ifndef MAIN_H
#define MAIN_H

char * _memset(char *s, char b, unsinged int n);
int _putchar(char);
char * memcpy(char *dest, char *src,  unsinged int n);
char *_strchr(char *s, char *accept);
unsinged int _strspn(char *s, char *accept);
char *_strbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_cheeseboard(char (*a)[8]);
void print diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
