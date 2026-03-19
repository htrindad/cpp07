/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:11:31 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/19 17:26:23 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <iostream>

template <typename T, typename F>
void iter(T *array, std::size_t size, F f)
{
	if (!array)
		return ;
	for (std::size_t i = 0; i < size; i++)
		f(array[i]);
}
