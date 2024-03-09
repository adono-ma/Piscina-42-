/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 03:38:26 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/21 16:58:49 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contar;

	contar = 0;
	while (*str != '\0')
	{
		contar++;
		str++;
	}
	return (contar);
}
/*
int	main(void)
{
	char	*str = "I cannot count";
	
	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}*/
