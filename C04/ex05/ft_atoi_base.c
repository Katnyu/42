/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:10:54 by geoffrey          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:04 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_base(char *base)
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
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-'
				|| base[j] == ' ' || base[j] == '	'
				|| base[j] == '\n')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	power(n, x)
{
	int	result;

	result = 1;
	while (n > 0)
	{
		result *= x;
		n--;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	len_base;
	int	len_str;
	int	i;
	int	sign;

	if (verify_base(base) == 0)
		return (0);
	len_base = ft_strlen(base);
	len_str = ft_strlen(str) - 1;
	result = 0;
	i = 0;
	sign = -1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i])
	{
		result += power(len_str, len_base) * (str[i] - '0');
		i++;
		len_str--;
	}
	return (result * sign);
}
