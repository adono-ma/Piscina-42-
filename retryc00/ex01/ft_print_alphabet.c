/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphabet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:44:59 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/16 01:57:17 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//hola
/* Este es 
 * de varias lineas */

void	ft_print_alphabet(void)
{
	int		ascii_value;
	char	c;

	ascii_value = 97;
	c = ascii_value;
	while (ascii_value <= 122)
	{
		c = ascii_value;
		write(1, &c, 1);
		ascii_value++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
