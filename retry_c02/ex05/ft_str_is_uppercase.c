/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 02:36:32 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/24 03:15:45 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90) || (str[i] == '\0'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "AA";
	int		dest = ft_str_is_uppercase(str);

	printf("%d\n", dest);
	return (0);
}*/
