/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:50:50 by chchin            #+#    #+#             */
/*   Updated: 2022/06/03 11:17:25 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0 || haystack == needle)
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0)
		return (0);
	if (len < needle_len || !haystack)
		return (0);
	i = -1;
	while (i++, i <= len - needle_len)
	{
		if ((haystack[0] == needle[0])
			&& (ft_strncmp(haystack, needle, needle_len) == 0))
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
