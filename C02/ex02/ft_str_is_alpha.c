/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:23:30 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/03 14:55:04 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_alpha("Hello"));
	printf("%d\n", ft_str_is_alpha("aBcxYz"));
	printf("%d\n", ft_str_is_alpha("Hi42"));
	printf("%d\n", ft_str_is_alpha("42!"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("Hello!"));
	return (0);
}
*/