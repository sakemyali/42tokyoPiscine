#include <unistd.h>

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	int i = 1;
	while (argv[i])
	{
		i++;
	}
	int j = 0;
	while (argv[i - 1][j])
	{
		char c = argv[i - 1][j];
		write(1, &c, 1);
		j++;
	}
	write(1, "\n", 1);
	return 0;
}
