#include "shell.h"

void parser(void)
{
	char *command = NULL;
	size_t buffsize = 0;

	while (getline(&command, &buffsize, stdin) != -1)
	{
		char *token = strtok(command, " ");
		while (token != NULL)
		{
			token = strtok(NULL, " ");
		}
	}
	command = NULL;
	free(command);
}
