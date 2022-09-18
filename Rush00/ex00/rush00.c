/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:02:58 by adantas-          #+#    #+#             */
/*   Updated: 2022/07/10 14:11:26 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printing(int x, int y, int maxc, int maxl);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	maxl;
	int	maxc;

	maxl = x;
	maxc = y;
	ft_printing(x, y, maxl, maxc);
}

void	ft_printing(int x, int y, int maxc, int maxl)
{
	x = 1;
	while (x <= maxl && maxl > 0 && maxc > 0)
	{
		y = 1;
		while (y <= maxc)
		{
			if ((x == 1 || x == maxl) && (y == 1 || y == maxc))
				ft_putchar('o');
			else if ((x == 1 || x == maxl) && (y > 1 || y < maxc))
				ft_putchar('-');
			else if ((x > 1 || x < maxl) && (y == 1 || y == maxc))
				ft_putchar('|');
			else
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
