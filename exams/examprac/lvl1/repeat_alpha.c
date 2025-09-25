#include <unistd.h>

int repeat(char c)
{
	int r;
	if (c >= 'A' && 'Z' >= c)
	{
		r = c - 64;
		return r;
	}
	if (c >= 'a' && 'z' >= c)
	{
		r = c - 96;
		return r;
	}
	else
		return 1;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	int i = 0;
	while (argv[1][i])
	{
		int r = repeat(argv[1][i]);
		while (r > 0)
		{
			write(1, &argv[1][i], 1);
			r--;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
