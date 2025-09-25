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
		putchar('\n');
		return 1;
	}
	int i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'A' && argv[1][i] < 'Z') || (argv[1][i] >= 'a' && argv[1][i] < 'z'))
			putchar(argv[1][i] + 1);
		else if (argv[1][i] == 'Z')
			putchar('A');
		else if (argv[1][i] == 'z')
			putchar('a');
		else
			putchar(argv[1][i]);
		i++;
	}
	putchar('\n');
	return 0;
}
