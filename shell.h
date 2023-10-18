#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

/* wait */
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_LENGTH 1024

/**
 * struct builtin_m - structure defining builtins
 * @name: name of builtin
 * @f: function pointer
 */
typedef struct builtin_m
{
	char *name;
	int (*f)(char **argv, char **front);
} builtin_t;

/* functions that already exist */
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
char *_strchr(char *s, char c);
size_t _strspn(const char *s, const char *chars);
int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/* builtin */
int (*matcher(char *cmd))(char **argument, char **front);
int exit_from_shell(char **argument, char **front);

void execute(char *cmd);
void signal_handler(int signal);

#endif
