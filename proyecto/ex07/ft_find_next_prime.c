/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:11:37 by damedina          #+#    #+#             */
/*   Updated: 2023/07/18 19:55:06 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	num;
	int	i;
	int	j;

	num = nb;
	if (nb < 2)
		return (2);
	i = 2;
	while (i < nb && nb % i != 0)
		i++;
	if (i == nb)
		return (nb);
	i = nb;
	while (i < 2147483647)
	{
		j = 2;
		while (j < i && i % j != 0)
			j++;
		if (j == i)
			return (i);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(4));
}
*/
