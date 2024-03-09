/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:35:51 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/16 13:20:43 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	{
		if (n < 0)
			write(1, &a, 1);
		else
		{
			write(1, &b, 1);
		}
	}
}
/*
int	main(void)
{
	ft_is_negative(-58);
	return (0);
}*/
