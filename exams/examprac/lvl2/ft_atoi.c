
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int sum = 0;
	while (str[i])
	{
		if (str[i] >= '0' && '9' <= str[i])
		{
			sum += str[i] - '0';
			sum *= 10;
		}
		else if (str[i] == '-')
			sign *= -1;
		else if (str[i] == '+')
			sign *= 1;
		else
			return (sum * sign);
		i++;
	}
	return (sum * sign);
}

