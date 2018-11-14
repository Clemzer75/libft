/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:33:48 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/14 18:00:53 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	const unsigned char	*tab1;
	const unsigned char	*tab2;

	tab1 = (const unsigned char *)s1;
	tab2 = (const unsigned char *)s2;
	i = 0;
	while (--n)
	{
		if (tab1[i] == tab2[i])
			i++;
		else
			return (tab1[i] - tab2[i]);
	}
	return (tab1[i] - tab2[i]);
}
