/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 04:35:30 by dbagis            #+#    #+#             */
/*   Updated: 2025/05/01 14:36:53 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && 90 >= str[i])
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
#include <stdio.h>

int main()
{
	char s[] = "ASD1asd11111";
	printf("%s", ft_strlowcase(s));
	return 0;
}
