#include "ft_printf.h"
#include <limits.h>

int main(void)
{
/* 	int i = 0;
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
	} */

		// ft_printf("%s\n", "something ");
	//write (1, "\n", 1);
	// printf("%s\n", "else ");
	//write (1, "\n", 1);

	// ft_printf(" %s", "");
	// write (1, "\n", 1);
	// printf(" %s", "");
	// write (1, "\n", 1);

	// ft_printf("%s ", "");
	// write (1, "\n", 1);
	// printf("%s ", "");
	// write (1, "\n", 1);
	
	// ft_printf(" %s ", "");
	// write (1, "\n", 1);
	// printf(" %s ", "");
	// write (1, "\n", 1);

	// ft_printf(" %s ", "-");
	// write (1, "\n", 1);
	// printf(" %s ", "-");
	// write (1, "\n", 1);

	int count = ft_printf("%d \n", 0);
	int count2 = printf("%d \n", 0);

	printf("%i\n", count);
	printf("%i\n", count2);
}