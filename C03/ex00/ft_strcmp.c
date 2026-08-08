/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:12:34 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/06 16:51:08 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d\n", ft_strcmp("abc", "acd"));
	printf("%d\n", ft_strcmp("cat", "cap"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("Apple", "Banana"));
	printf("%d\n", ft_strcmp("House", "Roof"));
	return (0);
}
*/