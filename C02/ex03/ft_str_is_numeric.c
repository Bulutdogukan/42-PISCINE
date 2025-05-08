/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 03:12:22 by dbagis            #+#    #+#             */
/*   Updated: 2025/04/24 13:01:08 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!('0' <= str[i] && '9' >= str[i]))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_str_is_numeric("123"));
	return 0;
}
