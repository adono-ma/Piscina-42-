/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:14:41 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/26 17:55:16 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_already_cap;

	i = 0;
	word_already_cap = 0;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && ! word_already_cap)
		{
			str[i] -= 32;
			word_already_cap = 1;
		}
		else if (str[i] < 97 || str[i] > 122)
			word_already_cap = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "aLER ¿tA-1pErma n3nt3";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/
