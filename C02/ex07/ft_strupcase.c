/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 04:23:12 by dbagis            #+#    #+#             */
/*   Updated: 2025/05/01 14:36:31 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (97 <= str[i] && 122 >= str[i])
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char s[] = "ASDasd1";
	printf("%s", ft_strupcase(s));
	return 0;
}
