/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:17:17 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/26 20:33:01 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str[24] = "una cosa te voy a decir";
	char	dest[50] = "";

	ft_strcpy(dest, str);
	printf("source: %s\n", str);
	printf("dest: %s\n", dest);
	return (0);
}*/
