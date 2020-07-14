/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:48:44 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/14 10:59:46 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power){
	int sum;
	int i;

	sum = 1;

	if(i <= power){
		i =+ 1;
		sum = sum*nb;
		ft_recursive_power(nb, power);
		return (0);
	}
	else{
		return (0);
	}
