#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	char *string;

	string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int bytes_written	 = write(2, string, strlen(string));

	return (0);
}
