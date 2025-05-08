/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 05:27:05 by dbagis            #+#    #+#             */
/*   Updated: 2025/04/24 13:16:45 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9' ))
		{
			if (j && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!j && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
#include <stdio.h>

int main()
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(s));
	return 0;
}
