/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:16:54 by dbagis            #+#    #+#             */
/*   Updated: 2025/04/15 21:18:07 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int lar, char d, char m, char f)
{
	int	j;

	j = 0;
	while (j < lar)
	{
		if (j == 0)
			ft_putchar(d);
		else
		{
			if (j == lar - 1)
				ft_putchar(f);
			else
				ft_putchar(m);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, '/', '*', '\\');
		else
		{
			if (i == y - 1)
				draw_line(x, '\\', '*', '/');
			else
				draw_line(x, '*', ' ', '*');
		}
		i++;
	}
}
