/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:51:28 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/09 15:36:31 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int c)
{
    if ((48 <= c) && (c <= 57))
        return 1;
    return 0;
}
/*
#include <stdio.h>
int	main(void)
{
	char	x;
    int		y;

    printf("in: ");
    scanf("%c", &x);

    y = ft_isdigit(x);

    printf("%c -> ascii: %d\n", x, x);

    if (y == 1)
        printf("OK: %c, is digit\n", x);
    else if (y == 0)
        printf("NOT: %c, is NOT digit\n", x);
    else printf("error, %c no reconocido\n", x);
}
*/
