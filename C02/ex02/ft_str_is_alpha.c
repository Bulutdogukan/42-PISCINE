/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 02:34:04 by dbagis            #+#    #+#             */
/*   Updated: 2025/04/24 16:21:47 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_alpha("ahmet"));
	printf("%d\n", ft_str_is_alpha("123"));
	return 0;

}
