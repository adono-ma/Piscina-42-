/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:25:38 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/29 23:46:54 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	string;
	int	find;

	if (to_find[0] == '\0')
		return (str);
	string = 0;
	while (str[string] != '\0')
	{
		find = 0;
		while (str[find + string] != '\0')
		{
			if (str[find + string] != to_find[find])
				break ;
			if (to_find[find + 1] == '\0')
				return (&str[string]);
			find++;
		}
		string++;
	}
	return (0);
}

int	main(void)
{
	char	haystack[] = "Saludos ";
	char	needle[] = "dos!";
	printf("Found: %s\n", ft_strstr(haystack, needle));
	return (0);
}
