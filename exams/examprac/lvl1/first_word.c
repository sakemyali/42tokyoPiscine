#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	int i = 0;
	char *c = argv[1];
	while (c[i])
	{
		if (!((c[i -1] >= 'a' && c[i - 1] <= 'z') || (c[i -1] >= 'A' && c[i -1] <= 'Z') || (c[i - 1] >= '0' && c[i - 1] <= '9')) && ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= '0' && c[i] <= '9')))
		{
			int j = i;
			while (c[j] && ((c[j] >= 'a' && c[j] <= 'z') || (c[j] >= 'A' && c[j] <= 'Z') || (c[j] >= '0' && c[j] <= '9')))
			{
				write(1, &c[j], 1);
				j++;
			}
			write(1, "\n", 1);
			return 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return 1;
}
