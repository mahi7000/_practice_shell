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

int _putchar(char c);
int _strlen(char *s);

int prompt(void);
void parser(void);
void signal_int(int signal_number);
void signal_term(int signal_number);

#endif
