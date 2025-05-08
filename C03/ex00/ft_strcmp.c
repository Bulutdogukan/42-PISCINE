/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:27:27 by dbagis            #+#    #+#             */
/*   Updated: 2025/05/01 17:32:13 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{	
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int main()
{
	char *s1 = "ahmet";
	char *s2 = "mehmet";

	printf("%d", ft_strcmp(s1, s2));
	return 0;


}
