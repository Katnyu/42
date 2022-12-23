/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:57:56 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/23 11:08:22 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		*dest++;
	while (*src)
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	return (*dest = 0);
}
