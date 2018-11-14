/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:34:13 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/09 16:10:10 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int s;
	int f;

	s = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[s])
	{
		f = 0;
		while (needle[f] == haystack[s + f])
		{
			if (needle[f + 1] == '\0')
				return ((char*)(haystack + s));
			f++;
		}
		s++;
	}
	return (0);
}
