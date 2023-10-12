/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:01:31 by damedina          #+#    #+#             */
/*   Updated: 2023/07/19 13:33:00 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 0;
	if (nb < 0)
		return (0);
	while (num * num != nb && num < 47000)
		num++;
	if (num == 47000)
		return (0);
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(25));
}
*/
