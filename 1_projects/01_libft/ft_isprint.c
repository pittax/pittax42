/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:21 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/09 16:06:09 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
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

	y = ft_isprint(x);

	printf("%c -> ascii: %d\n", x, x);

	if (y == 1)
		printf("OK, %c, is printable\n", x);
	else if (y == 0)
		printf("NOT: %c, is NOT printable\n", x);
	else printf("error, %c no reconocido\n", x);
}
