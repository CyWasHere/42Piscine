/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:15:30 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/05 12:47:37 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%s\n", ft_strstr("Hello World", "World"));
	printf("%s\n", ft_strstr("42Piscine", "cine"));
	printf("%s\n", ft_strstr("abcdef", "cd"));

	if (ft_strstr("abcdef", "xyz") == 0)
		printf("match not found\n");

	printf("%s\n", ft_strstr("Hello", ""));
	return (0);
}
*/