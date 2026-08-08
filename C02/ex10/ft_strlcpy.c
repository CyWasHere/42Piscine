/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 11:22:03 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/03 15:01:23 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0)
		return (len_src);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*
int main(void)
{
	char dest[20];
	unsigned int len;

	len = ft_strlcpy(dest, "Hello", sizeof(dest));
	printf("Dest: %s\n", dest);
	printf("Rerutned: %u\n", len);

	len = ft_strlcpy(dest, "Hello", 4);
	printf("Dest: %s\n", dest);
	printf("Rerutned: %u\n", len);

	len = ft_strlcpy(dest, "Piscine", 0);
	printf("Rerutned: %u\n", len);
	return (0);
}
*/