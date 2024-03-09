/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:53:55 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/16 02:07:57 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		ascii_value;
	char	c;

	ascii_value = 122;
	c = ascii_value;
	while (ascii_value >= 97)
	{
		c = ascii_value;
		write(1, &c, 1);
		ascii_value--;
	}
}
/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
