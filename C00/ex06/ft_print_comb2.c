/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:58:46 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/07 12:58:48 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_comb(void)
{
	int	dizaine;
	int	unite;

	dizaine = 0;
	unite = 0;
	while (dizaine <= 97)
	{
		while (unite <= 99)
		{
			ft_write(dizaine / 10 + '0');
			ft_write(dizaine % 10 + '0');
			write(1, " ", 1);
			ft_write(unite / 10 + '0');
			ft_write(unite % 10 + '0');
			write(1, ", ", 2);
			unite++;
		}
		dizaine ++;
		unite = dizaine + 1;
	}
	write(1, "98 99", 5);
}
