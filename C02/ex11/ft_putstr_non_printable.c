/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:02:40 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/14 11:06:33 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

void	find_base(char c)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	ft_putstr('\\');
	ft_putstr(base_16[c / 16]);
	ft_putstr(base_16[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31 || str[i] == 127)
			find_base(str[i++]);
		ft_putstr(str[i++]);
	}
}
