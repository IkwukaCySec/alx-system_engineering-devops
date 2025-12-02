#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/**
 * infinite_while - infinite while loop.
 * Return: 0 in the end
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int children_process = 0;
	pid_t pid;

	while (children_process < 5)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %i\n", (int)pid);
		children_process++;
	}
	if (pid != 0)
		infinite_while();
	return (0);
}
