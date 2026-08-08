/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:30:34 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/05 12:49:21 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char	str1[30] = "Hello";
	char	str2[30] = "42 ";
	char	str3[30] = "";

	printf("%s\n", ft_strcat(str1, "World"));
	printf("%s\n", ft_strcat(str2, "Piscine"));
	printf("%s\n", ft_strcat(str3, "First"));

	return (0);
}
*/