/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:05:51 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/09 14:24:11 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	x;
	int		y;

	printf("in: ");
	scanf("%c", &x);

	y = ft_isalpha(x);

	printf("%c -> ascii: %d\n", x, x);

	if (y == 1)
		printf("OK, %c, is alpha\n", x);
	else if (y == 0)
		printf("NOT: %c, is NOT alpha\n", x);
	else printf("error, %c no reconocido\n", x);
}
*/
