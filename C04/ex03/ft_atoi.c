/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:24:48 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/06 18:56:06 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int sinal;
	int res;

	i = 0;
	sinal = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sinal);
}

int main(void)
{
	char *str1 = " ---+--+1234ab567";
	char *str2 = "   \n \t -4242";

	printf("test 1 %s  becomes -> %d\n", str1, ft_atoi(str1));
	printf("test 2 %s  becomes -> %d\n", str2, ft_atoi(str2));
	return (0);
}
