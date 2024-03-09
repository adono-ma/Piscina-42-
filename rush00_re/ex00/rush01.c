/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:10:47 by arenilla          #+#    #+#             */
/*   Updated: 2023/11/12 19:20:50 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

char	conditions(int a, int b, int x, int y)
{
	char	test;

	if ((a == 1 && b == 1) || (a == x && b == y && a != 1 && b != 1))
		test = '/';
	else if ((a == x && b == 1) || (a == 1 && b == y))
		test = '\\';
	else if (a == 1 || a == x || b == 1 || b == y)
		test = '*';
	else
		test = ' ';
	return (test);
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	if (x > 0 && y > 0)
	{
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{
				ft_putchar(conditions(a, b, x, y));
				a++;
			}
			ft_putchar('\n');
			b++;
		}
	}
	else
		write (1, "Ambos valores deben ser mayor a 0", 33);
}
