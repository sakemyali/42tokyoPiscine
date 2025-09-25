#include <unistd.h>

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
		char c = argv[1][i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c += 13;
		else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
			c -= 13;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
