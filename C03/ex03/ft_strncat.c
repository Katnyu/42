/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:18:51 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/23 11:23:18 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest)
		*dest++;
	while (nb > 0)
	{
		*dest = *src;
		*dest++;
		*src++;
		nb--;
	}
	return (*dest = 0);
}
