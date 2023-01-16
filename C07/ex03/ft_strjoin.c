/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:44:34 by geoffrey          #+#    #+#             */
/*   Updated: 2023/01/16 17:59:33 by geoffrey         ###   ########.fr       */
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

char	ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

int	size_for_malloc(int size, char **strs, char *sep)
{
	unsigned int	i;
	unsigned int	res;

	res = 0;
	i = 0;
	while (i < size)
	{
		res += ft_strlen(strs[i]);
		i++;
	}
	res += ft_strlen(sep) * size - 1;
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *) malloc(size_for_malloc(size, strs, sep) + 1 * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	if (size == 0)
		return (res);
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

/* 

	int main() {
    char *strs[] = {"Hello", "World", "!"};
    char *sep = " ";
    char *result = ft_strjoin(3, strs, sep);
    printf("%s\n", result); // Affiche "Hello World !"
    free(result);
    return 0;
} */
