/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 07:20:52 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/16 02:16:41 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (!(c == '7' && d == '8' && u == '9'))
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return ('0');
}*/
