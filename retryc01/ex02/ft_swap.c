/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:45:20 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/17 03:29:44 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 2;
	ft_swap (&a, &b);
	printf("%d %d", a, b);
	return (0);
}*/
