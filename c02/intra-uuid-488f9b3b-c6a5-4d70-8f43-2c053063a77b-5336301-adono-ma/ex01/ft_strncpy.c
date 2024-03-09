/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:16:35 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/25 20:41:27 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "mi gato se llama guantes";
	char	dest[24] = "";
	unsigned int	n = 7;
	ft_strncpy(dest, str, n);
	printf("source: %s dest: %s", str, dest);
	return (0);
}*/
