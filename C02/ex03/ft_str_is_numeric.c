/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:00:12 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/03 14:55:13 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_numeric("123456"));
	printf("%d\n", ft_str_is_numeric("987650"));
	printf("%d\n", ft_str_is_numeric("Hi42"));
	printf("%d\n", ft_str_is_numeric("42!"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("Hello!"));
	return (0);
}
*/