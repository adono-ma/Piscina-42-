/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 02:00:32 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/24 03:14:09 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '\0'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "15667";
	int		dest = ft_str_is_numeric(str);

	printf("%d\n", dest);
	return (0);

Si los if y else solo tienen una línea, se les pueden quitar las llaves
}*/
