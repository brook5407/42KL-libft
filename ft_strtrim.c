/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:34:10 by chchin            #+#    #+#             */
/*   Updated: 2022/06/03 11:17:25 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*rtn;
	size_t	i;
	size_t	size;	

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (check_set(s1[start], set) != 0)
		start++;
	while (start < end && check_set(s1[end], set) != 0)
		end--;
	size = end - start + 1;
	rtn = ft_substr(s1, start, size);
	return (rtn);
}
