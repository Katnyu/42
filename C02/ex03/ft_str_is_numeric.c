/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:41:31 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/09 15:44:37 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if (str[i] < 0 || str[i] > 9)
			return (0);
		i++;
	}
	return (1);
}
