#include "libft_printf.h"

int	ft_printchar(int c)
{	
	write(1, &c, 1);
	return (1);
}

/* int main ()
{
	int a = 'D';

	ft_printchar(a);
	return (0);
} */