void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

// int main()
// {
// 	int a = 1;
// 	int b = 2;
// 	ft_swap(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return 0;
// }
