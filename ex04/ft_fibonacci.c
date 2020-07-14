/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:01:24 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/14 11:18:06 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci(int index){
	int i;
	int seq;

	i = 0;
	seq = 0;

	if(i <= index){
		seq = seq + index;
		ft_fibonacci(index);
		seq = index - seq;
		return (seq);
	}
	else{
		return (-1);
