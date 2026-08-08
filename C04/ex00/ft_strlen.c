/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:53:16 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/05 14:00:05 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	int len;
	int len1;
	int len2;

	len = ft_strlen("This is a test string");
	len1 = (len / 10) + '0';
	len2 = (len % 10) + '0';
	write(1, &len1, 1);
	write(1, &len2, 1);
	return (0);
}
