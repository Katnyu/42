/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:35:00 by geoffrey          #+#    #+#             */
/*   Updated: 2023/01/10 15:44:32 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
