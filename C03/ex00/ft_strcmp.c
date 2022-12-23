/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:08:36 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/23 10:48:42 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	while (*s1 != '\0' && *s1 == *s2)
	{
		result = *s1 - *s2;
		if (result != 0)
			return (result);
		*s1++;
		*s2++;
	}
	return (result);
}	
