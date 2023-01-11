/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:01:44 by geoffrey          #+#    #+#             */
/*   Updated: 2023/01/10 15:23:51 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	unsigned int	i;
	
	i = 2;

	while (i * i <= nb)
	{	
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
