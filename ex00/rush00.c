/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-la-c <ede-la-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:47:48 by ede-la-c          #+#    #+#             */
/*   Updated: 2023/07/09 15:22:19 by ede-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	ft_lines(int *pos, int x, int y, char *p)
{
	int	a;
	int	b;

	a = pos[0];
	b = pos[1];
	if (b > 0 && b < y - 1 && a > 0 && a < x - 1)
	{
		ft_putchar(' ');
	}
	else if (a > 0 && a < x - 1)
	{
		ft_putchar(p[4]);
	}
	else if (b > 0 && b < y - 1)
	{
		ft_putchar(p[5]);
	}
}

void	ft_graph(int *pos, int x, int y, char *p)
{
	int	a;
	int	b;

	a = pos[0];
	b = pos[1];
	if (b == 0 && a == 0)
	{
		ft_putchar(p[0]);
	}
	else if (a == x - 1 && a > 0 && b == 0)
	{
		ft_putchar(p[1]);
	}
	else if (b == y - 1 && b > 0 && a == 0)
	{
		ft_putchar(p[2]);
	}
	else if (b == y - 1 && a == x - 1)
	{
		ft_putchar(p[3]);
	}
	else
	{
		ft_lines(pos, x, y, p);
	}
}

void	rush(int x, int y)
{
	int		pos[2];
	char	p[6];

	p[0] = 'o';
	p[1] = 'o';
	p[2] = 'o';
	p[3] = 'o';
	p[4] = '-';
	p[5] = '|';
	pos[0] = 0;
	pos[1] = 1;
	pos[1] = 0;
	while (pos[1] < y)
	{
		pos[0] = 0;
		while (pos[0] < x)
		{
			ft_graph(pos, x, y, p);
			pos[0]++;
		}
		ft_putchar('\n');
		pos[1]++;
	}
}
