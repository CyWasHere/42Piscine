/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:14:35 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/03 14:58:29 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_printable("Hello World! 1234 @~"));
	printf("%d\n", ft_str_is_printable("Hello\tWorld"));
	printf("%d\n", ft_str_is_printable("Hello\nWorld"));
	printf("%d\n", ft_str_is_printable("42!"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("Hello\x7World"));
	return (0);
}
*/