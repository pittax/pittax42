/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:22:57 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/10 18:21:21 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *restrict *dst, const void *restrict src, size_t n)
{
    size_t	i;
    char	*d;
    char	*s;

    i = 0;
    d = (char *)dst;
    s = (char *)src;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
