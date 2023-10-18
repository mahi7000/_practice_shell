#include "shell.h"

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *shell_prompt = "shell$ ";
	char *space = NULL;
	size_t buffsize = 0;

	signal(SIGINT, signal_int);

	while (1)
	{
		write(STDIN_FILENO, shell_prompt, _strlen(shell_prompt));
		parser();
		if (getline(&space, &buffsize, stdin) == -1)
		{
			_putchar('\n');
			break;
		}
	}

	return (0);
}
