#include <unistd.h>

int main()
{
	char c = 'z';
	write(1, &c, 1);
	return 0;
}
