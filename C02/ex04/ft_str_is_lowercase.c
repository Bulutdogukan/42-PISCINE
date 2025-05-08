/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 04:14:24 by dbagis            #+#    #+#             */
/*   Updated: 2025/04/24 13:05:38 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!('a' <= str[i] && 'z' >= str[i]))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_lowercase("Ahmet"));
	printf("%d\n", ft_str_is_lowercase("asd"));
	return 0;
}

