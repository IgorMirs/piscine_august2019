#include "./ft_putnbr.c"
#include <unistd.h>

int main(void)
{
	ft_putnbr(245);
	write(1, "\n", 1);
	ft_putnbr(-245);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	return (0);
}
