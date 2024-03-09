/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:35:51 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/16 12:00:14 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	{
		while (i <= 57)
		{
			write(1, &i, 1);
			i++;
		}
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
