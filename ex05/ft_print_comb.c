#include <unistd.h>

void ft_putchar(char c);
void ft_print_comb(void);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a = '0'; 
	char b = '0'; 
	char c = '0';
	while(a <= 55)
	{
   		b = a+ 1;
    	while(b <= 56)
    	{
        	c = b+ 1;
        	while(c <= 57)
        	{
            	ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			 	write(1, ", ", 2);
            	c++;
				
			}
        	b++;
    	}
    	a++;
	}
}
