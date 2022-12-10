/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oataseve <oataseve@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:16:57 by oataseve          #+#    #+#             */
/*   Updated: 2022/12/10 17:26:26 by oataseve         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	j;

	j = 0;
	if (b == NULL)
		return (NULL);
	while (j < len)
	{
		((unsigned char *)b)[j] = (unsigned char)c;
		j++;
	}
	return (b);
}
