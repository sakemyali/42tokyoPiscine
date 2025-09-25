#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	char temp;
	int i = 0;
	while (argv[1][i])
		i++;
	i--;
	int j = 0;
	while (j < i)
	{
		temp = argv[1][i];
		argv[1][i] = argv[1][j];
		argv[1][j] = temp;
		i--;
		j++;
	}
	putstr(argv[1]);
	putchar('\n');
	return 0;
}
