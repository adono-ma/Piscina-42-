/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 02:51:24 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/24 02:58:35 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126) || (str[i] == '\0'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "";
	int		dest = ft_str_is_printable(str);

	printf("%d\n", dest);
	return (0);
}*/
