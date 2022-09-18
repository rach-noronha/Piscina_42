/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:38:44 by rde-noro          #+#    #+#             */
/*   Updated: 2022/07/19 15:13:35 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char b);

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;

	d1 = 0;
	while (d1 <= 98)
	{
		d2 = d1 + 1;
		while (d2 <= 99)
		{
			ft_putchar(d1 / 10 + 48, d1 % 10 + 48);
			write(1, " ", 1);
			ft_putchar(d2 / 10 + 48, d2 % 10 + 48);
			if (d1 != 98)
				write(1, ", ", 2);
			d2++;
		}
		d1++;
	}
}

void	ft_putchar(char c, char b)
{
	write(1, &c, 1);
	write(1, &b, 1);
}
