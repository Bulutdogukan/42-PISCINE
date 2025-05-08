/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagis <dbagis@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:34:50 by dbagis            #+#    #+#             */
/*   Updated: 2025/04/24 16:57:01 by dbagis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
#include <stdio.h>

int main(void)
{
	char dest[5];
	char src [] = ("ahmetim");
	unsigned int cevap = ft_strlcpy(dest, src, sizeof(dest));

	printf("%s\n", dest);
	printf("%u\n", cevap);
	return 0;
}

	


	
