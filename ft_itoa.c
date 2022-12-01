/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:05:52 by chchin            #+#    #+#             */
/*   Updated: 2022/06/03 11:17:25 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	intsize(long n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
	{
		n = -n;
		size++;
	}
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nbr;
	size_t	size;

	nbr = n;
	if (n < 0)
		nbr = -nbr;
	size = intsize(n);
	s = (char *)malloc(sizeof(char) * size + 1);
	if (!(s))
		return (0);
	s[size] = '\0';
	while (size--, nbr > 0)
	{
		s[size] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && s[1] == '\0')
		s[size] = '0';
	else if (size == 0 && s[1] != '\0')
		s[size] = '-';
	return (s);
}
