#include <unistd.h>
#include <stdio.h>


void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
	int i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}	

}
