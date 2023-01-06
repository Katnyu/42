/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:18:45 by geoffrey          #+#    #+#             */
/*   Updated: 2023/01/06 17:21:10 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
