#include "shell.h"

void signal_int(int signal_number)
{
	signal(SIGINT, signal_int);

	char *shell_prompt = "\nshell$ ";
	write(STDIN_FILENO, shell_prompt, _strlen(shell_prompt));

	(void)signal_number;
}

void signal_term(int signal_number)
{
	signal(SIGTERM, signal_term);
	(void)signal_number;
}
