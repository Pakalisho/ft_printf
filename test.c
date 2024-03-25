#include "libft_printf.h"

int main(void)
{
	int i = 0;
	char *str = "Take a deep breath...";
	char *str2 = "count until 3...\n";
	char *str3 = "Aloha";
	ft_printf("Now: %s\n%s", str, str2);
	printf("%s, again\n", str);	

	ft_printf("%%Testing memory:\n");
	ft_printf("ft_printf:\n");
	while (str3[i])
	{
		ft_printf("%p\n", &str3[i]);
		i++;
	}
	printf("printf:\n");
	i = 0;
	while (str3[i])
	{
		printf("%p\n", &str3[i]);
		i++;
	}

	ft_printf("%s, \\0again\n", str, str2);
	printf("%s, \\0again\n", str);
}