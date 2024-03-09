/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 01:12:15 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/24 03:13:36 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)
			|| (str[i] == '\0'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "";
	int		dest = ft_str_is_alpha(str);

	printf("%d\n", dest);
	return (0);
}*/
