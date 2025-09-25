#include <unistd.h>

void print_a()
{
	char a = 'a';
	write(1, &a, 1);
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_a();
		return 1;
	}
	int i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			print_a();
			return 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return 1;
}
