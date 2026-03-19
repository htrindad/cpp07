/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:30:38 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/19 17:02:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
T min(const T &a, const T &b)
{
	if (a < b)
		return a;
	else
		return b;
}
