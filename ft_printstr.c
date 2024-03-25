#include "libft_printf.h"

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int ft_printstr(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

/* int main(void)
{
	char *str = "Suenan los tambores de la rebelión!\n";
	char *str2 = "";
	int a;
	a = ft_printstr(str);
	printf("%i\n", a);
	a = ft_printstr(str2);
	printf("%c", '\n');
	printf("%i\n", a);
} */