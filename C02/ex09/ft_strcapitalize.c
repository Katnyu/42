/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <geoffreymartelin@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:06:02 by geoffrey          #+#    #+#             */
/*   Updated: 2022/12/13 12:46:01 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isuppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalpha(char c)
{
	if (ft_islowercase(c) || ft_isuppercase(c))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isuppercase(str[i]))
			str[i] += 32;
		i++;
	}
	if (ft_islowercase(str[0]))
		str[i] -= 32;
	i = 1;
	while (str[i])
	{
		if (!ft_isnumber(str[i - 1]) && !ft_isalpha(str[i - 1])
			&& ft_islowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/* Deuxième méthode plus débutant et dégueulasse 
char    *ft_strcapitalize(char *str)
{
    unsigned int i;
    
    i = 0;
    
    if (str[0] == 0)
        return (str);
        
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    i = 1;
    
    while (str[i])
    {
      
       
        
        if (str[i-1] >= 00 && str[i-1] <= 47  && str[i] >= 97 && str[i] <= 122 
	|| str[i-1] >= 91 && str[i-1] <= 96 && str[i] >= 97 && str[i] <= 122 
	|| str[i] >= 58 && str[i] <= 64 && str[i] >= 97 && str[i] <= 122
        || str[i-1] >= 123 && str[i-1] <= 127 && str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
        
    }
    return (str);
}
*/
