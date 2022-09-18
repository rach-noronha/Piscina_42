/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 01:31:34 by rde-noro          #+#    #+#             */
/*   Updated: 2022/07/24 01:41:41 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res_div;
	int	res_mod;

	if (*b != 0)
	{
		res_div = (*a) / (*b);
		res_mod = (*a) % (*b);
		*a = res_div;
		*b = res_mod;
	}
}
