/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:06:01 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/29 12:36:34 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
			ft_putchar(nb + '0');
	}
}
/*
int main()
{
	int i;
	i = -50492;
	ft_putnbr(i);
	return (0);
}*/
