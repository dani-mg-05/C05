/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:15:45 by damedina          #+#    #+#             */
/*   Updated: 2023/07/18 11:31:42 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb;
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d | %d\n", 5, ft_iterative_factorial(5));
}
*/
