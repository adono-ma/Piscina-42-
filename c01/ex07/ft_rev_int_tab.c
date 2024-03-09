/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 03:48:44 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/21 12:51:46 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		c = tab[b];
		tab[b] = tab[a];
		tab[a] = c;
		a++;
		b--;
	}
}
/*
int	main(void)
{
	int	arr[] = {2, 1, 0, 8, 4, 10};
	int	size = 6;
	
	ft_rev_int_tab(arr, size);

	int	a =0;
	while(a < size)
	{
		printf("%d", arr[a]);
		a++;
	}
	return (0);
}*/
