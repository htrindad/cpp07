/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:30:58 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/19 18:03:31 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T *arr;
		std::size_t size;
	public:
		Array() : arr(new T[0]), size(0) {}
		Array(std::size_t len) : arr(new T[len]), size(len) {}
		Array(const Array &ref) : arr(new T[ref.size]), size(ref.size)
		{
			for (std::size_t i = 0; i < size; i++)
				arr[i] = ref.arr[i];
		}
		Array &operator=(const Array &ref)
		{
			if (this != ref)
			{
				delete[] arr;
				size = ref.size;
				arr = new T[size];
				for (std::size_t i = 0; i < size; i++)
					arr[i] = ref.arr[i];
			}
			return *this;
		}
		const T &operator[](std::size_t i) const
		{
			if (i >= size)
				throw std::out_of_range("out of bounds");
			return arr[i];
		}
		T &operator[](std::size_t i) { return const_cast<T&>(static_cast<const Array&>(*this)[i]); }
		~Array() { delete[] arr; }
};
