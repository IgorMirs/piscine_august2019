#include <stdio.h>
#include <unistd.h>

void	ft_generic(void)
{
	write(1, "Tut tut ; Tut tut\n", 18);
}
int main(int argc, char **argv)
{
	ft_generic();
	return (0);
}
