/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:52:33 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/05 12:46:43 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	printf("%d\n", ft_strncmp("hello", "hello", 5));
	printf("%d\n", ft_strncmp("abc", "acd", 4));
	printf("%d\n", ft_strncmp("cat", "cap", 2));
	printf("%d\n", ft_strncmp("", "", 1));
	printf("%d\n", ft_strncmp("Apple", "Banana", 3));
	printf("%d\n", ft_strncmp("House", "Roof", 6));
	return (0);
}
*/