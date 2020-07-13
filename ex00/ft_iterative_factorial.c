/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:44:35 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/13 15:54:19 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb){
	int num;
	int i;
	int j =0;

	num = 0;

	for(i=n; i>0; i--){
		num = nb*(nb-j);
		j++;
	}
