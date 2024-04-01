#include "ft_printf.h"

/* static void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
} */

static int	ft_hexlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

char *ft_puthex(unsigned int n, const char format, char *str, int len)
{
	if (n < 16 && len > 0)
	{
		if (n <= 9)
		{
			str[len - 1] = n + '0';
			len--;
		}
		else
		{
			if (format == 'x')
			{
				str[len - 1] = n - 10 + 'a';
				len--;
			}
			if (format == 'X')
			{
				str[len - 1] = n - 10 + 'A';
				len--;
			}
		}
	}
	else
	{
		ft_puthex(n / 16, format, str, len);
		ft_puthex(n % 16, format, str, len);
	}
	return (str);
}

int	ft_printhex(unsigned int n, const char format)
{
	char *str;
	int len;

	len = ft_hexlen(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return(0);
	if (n == 0)
		return (write (1, "0", 1));
	str = ft_puthex(n, format, str, len);
	ft_printstr(str);
	str[len] = '\0';
	free (str);
	return (ft_hexlen(n));
}

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5;
	ft_printhex(a, 'x');
	printf("\n%x\n", b);
	ft_printhex(c, 'X');
	printf("\n%X\n", d);
	ft_printhex(e, 'X');
	write (1, "\n", 1);
	printf("%X", f);
	write (1, "\n", 1);

	int x0 = ft_printhex(-1, 'x');
	write (1, "\n", 1);
	int x1 = printf("%x", -1);
	write (1, "\n", 1);
	int x2 = ft_printhex(-1, 'X');
	write (1, "\n", 1);
	int x3 = printf("%X", -1);
	write (1, "\n", 1);

	write (1, "\n", 1);
	printf("%i\n", x0);
	printf("%i\n", x1);
	printf("%i\n", x2);
	printf("%i\n", x3);
}