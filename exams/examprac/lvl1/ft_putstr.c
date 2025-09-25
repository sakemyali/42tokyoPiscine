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

// int main()
// {
// 	char *str = "oibwgapiub gwapubgw pouWBG";
// 	putstr(str);
// 	return 0;
// }
