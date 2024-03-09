/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:43:05 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/21 16:57:57 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 16;
	b = 8;

	ft_ultimate_div_mod(&a, &b);
	printf ("%d\n", a);
	printf ("%d\n", b);
	return (0);
}*/
