/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:25:32 by geoffrey          #+#    #+#             */
/*   Updated: 2023/01/06 16:48:59 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if ((base[i] == base[j] || base[i] == '+' || base[i] == '-'
					|| base[j] == '+' || base[j] == '-' || base[i] < ' '
					|| base[i] > 126 || base[j] <= ' ' || base[j] > 126))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_base;
	char			str[172];
	int				i;

	if (!check_base(base))
		return ;
	i = 0;
	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putstr('-');
		nbr *= -1;
	}
	while (nbr != 0)
	{
		str[i] += base[nbr % len_base];
		nbr = nbr / len_base;
		i++;
	}
	while (i-- != -1)
		ft_putstr(str[i]);
}
