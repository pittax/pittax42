 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:36:40 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/10 14:40:37 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c);
int	ft_isdigit(int c);

int ft_isalnum(int c)
{
    if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
        return (1);
    return (0);
}

#include <stdio.h>
int	main(void)
{
    char	x;
    int		y;

    printf("in: ");
    scanf("%c", &x);

    y = ft_isalnum(x);

    printf("%c -> ascii: %d\n", x, x);

    if (y == 1)
        printf("OK: %c, is alpha or digit\n", x);
    else if (y == 0)
        printf("NOT: %c, is NOT alpha or digit\n", x);
    else printf("error, %c no reconocido\n", x);
}
