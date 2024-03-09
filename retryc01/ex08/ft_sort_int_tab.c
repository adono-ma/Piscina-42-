/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:54:44 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/21 13:25:36 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < size - 1)
	{
		b = a + 1;
		while (b <= size - 1)
		{
			if (tab[a] > tab[b])
			{
			c = tab[b];
			tab[b] = tab[a];
			tab[a] = c;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	int	arr[] = {2, 1, 0, 8, 4, 10};
	int	size = 6;

	ft_sort_int_tab(arr, size);

	int	a = 0;
	while (a < size)
	{
		printf("%d, ", arr[a]);
		a++;
	}
	return (0);
}*/
