/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 03:33:06 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/17 13:44:32 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	pepe;
	int	ale;
	int	*v1;
	int	*v2;

	v1 = &pepe;
	v2 = &ale;
	pepe = 5;
	ale = 5;
	ft_div_mod(pepe, ale, v1, v2);
	printf("%d\n", pepe);
	printf("%d", ale);
	return (0);
}*/
