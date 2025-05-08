/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 04:18:20 by dbagis            #+#    #+#             */
/*   Updated: 2025/05/01 14:35:31 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!('A' <= str[i] && 'Z' >= str[i]))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_str_is_uppercase("AH"));
	printf("%d", ft_str_is_uppercase("ah"));
	return 0;
}
