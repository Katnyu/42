/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:59:25 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/07 12:59:27 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char v[], int size, char value_max)
{
	int	i;

	i = 0;
	if (v[0] != value_max)
	{
		while (i < size)
		{
			write(1, &v[i], 1);
			i++;
		}
		write(1, ", ", 2);
	}
	if (v[0] == value_max)
	{
		while (i < size)
			write(1, &v[i++], 1);
		write(1, ".\n", 2);
	}
}

void	verify_input(int n)
{
	if (n <= 0 || n >= 10)
	{
		write(1, "Insert an 0<n<10\n", 17);
		return ;
	}
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int		flag;
	int		i;

	i = -1;
	flag = n - 1;
	while (i++ < n)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
	}
	ft_print_char(v, n, v_max[0]);
	while (v[0] != v_max[0])
	{
		while (v[flag] == v_max[flag])
			flag--;
		v[flag]++;
		while (flag++ < n -1)
			v[flag] = v[flag - 1] + 1;
		ft_print_char(v, n, v_max[0]);
	}
}
