#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648); // min int
	printf("\n");
	ft_putnbr(2147483647); // max int
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1);
	return 0;
}
// expected output
// -2147483648
// 2147483647
// -1
// 0
// -1

