/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:44:35 by gpittalu          #+#    #+#             */
/*   Updated: 2022/06/09 15:53:29 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
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

	y = ft_isascii(x);

	printf("%c -> ascii: %d\n", x, x);

	if (y == 1)
		printf("OK, %c, is ascii\n", x);
	else if (y == 0)
		printf("NOT: %c, is NOT ascii\n", x);
	else printf("error, %c no reconocido\n", x);
}
