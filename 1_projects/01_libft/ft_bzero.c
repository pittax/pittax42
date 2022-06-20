/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:17:42 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/10 16:16:59 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/*
int	main(void)
{
    char	*str;
    size_t	len;
    char	*str2;

    printf("ingrese oracion: ");
    scanf("%s", str);
    // printf("ingrese numero de espacios: ");
    // scanf("%zu", &len);
    len = 4;

    str2 = ft_bzero(str, len);
    printf("str2: %s\n", str2);

    return (0);
}*/
