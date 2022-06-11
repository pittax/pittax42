/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:08:36 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/09 17:24:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(const char *s)
{
    int	i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
/*
#include <stdio.h>
int	main(void)
{
    char	str[20];
    int 	y;

    printf("ingrese palabra: ");
    scanf("%s", str);

    y = ft_strlen(str);

    printf("la palabra tiene %d caracteres\n", y);
}
*/
