/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:45:55 by tconte            #+#    #+#             */
/*   Updated: 2021/03/11 16:19:04 by tconte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);

void ft_print_comb2(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';
	
	while (d >= 57)
	{
		if (d == 57)
		{
			c++;
			d = 48;
		}
		if (c == 57 && d == 57)
		{
			b++;
			c = 48;
			d = 48;
		}
		if (b == 57)
		{
			a++;
			b = 48;
		}
		if (a == 57 && b == 57)
		{
			return;
		}
		d++;
		ft_putchar(a);
		ft_putchar(b);
		write(1, ' ', 1);
		ft_putchar(c);
		ft_putchar(d);
		write(1, ',', 1);
		write(1, ' ', 1);
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_print_comb2();
}



