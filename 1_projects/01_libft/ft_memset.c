/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:30:46 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/10 15:34:26 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    char	*p;

    p = (char *)b;
    while (len > 0)
    {
        p[len - 1] = c;
        len--;
    }
    return b;
}

/*
int	main(void)
{
    char	*str;
    char	c;
    size_t	len;
    char	*str2;


    printf("ingrese oracion: ");
    scanf("%s", str);
    // printf("ingrese tipo de caracter: ");
    // scanf("%c", c);
    // printf("ingrese numero de espacios: ");
    // scanf("%d", len);
    c = 49;
    len = 5;

    str2 = ft_memset(str, c, len);
    printf("str2: %s\n", str2);

    return (0);
}*/
