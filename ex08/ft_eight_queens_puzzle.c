/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:23:43 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/14 12:32:31 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_eight_queens_puzzle(void){
	int pieces = 8;

	while(pieces){
		ft_eight_queens_puzzle();
	}
	return ft_eight_queens_puzzle();
}
