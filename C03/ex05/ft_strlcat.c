/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:41:19 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/23 12:14:50 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;
	unsigned int	remaining_size;

	dest_len = ft_strlen(dest);
	i = 0;
	j = 0;
	remaining_size = size - dest_len - 1;
	if (dest_len >= size)
		return (-1);
	while (dest[i])
		i++;
	while (src[i] && j < remaining_size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (ft_strlen(dest));
}
