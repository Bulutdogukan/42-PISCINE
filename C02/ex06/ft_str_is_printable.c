/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 04:20:36 by dbagis            #+#    #+#             */
/*   Updated: 2025/04/24 13:09:25 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(32 <= str[i] && 126 >= str[i]))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_str_is_printable("ahs"));
	return 0;
}
