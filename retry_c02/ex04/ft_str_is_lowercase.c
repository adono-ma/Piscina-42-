/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 02:20:06 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/24 03:14:29 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122) || (str[i] == '\0'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "AaAaA";
	int		dest = ft_str_is_lowercase(str);

	printf("%d\n", dest);
	return (0);
}*/
