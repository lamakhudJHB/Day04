/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursived_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:05:58 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/14 10:37:30 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb){
	int i;
	int sum;
	sum = nb;

	if(i <= nb){
		i += 1;
		sum = sum*(nb-1);
		ft_recursive_factorial(nb);
		return 0;
	}
	else{
		return (0);
	}
