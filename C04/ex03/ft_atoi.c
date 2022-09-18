/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:40:49 by rde-noro          #+#    #+#             */
/*   Updated: 2022/07/27 15:43:35 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{	
	int	i;
	int	resultado;
	int	sinal;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	sinal = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	resultado = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (resultado * sinal);
}
