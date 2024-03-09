/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:34:22 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/28 13:59:21 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_strlen(char *str)
{
	int	sl;

	sl = 0;
	while (str[sl] != '\0')
		sl++;
	str++;
	return (sl);
}
/*
int	main(void)
{
	char	sentence[] = "patata";
	int		str_length = ft_strlen(sentence);
	printf("Word count: %d\n", str_length);
	return (0);
}*/
