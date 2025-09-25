#include <unistd.h>

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	int i = 0;
	while (argv[1][i])
	{
		char c = argv[1][i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
