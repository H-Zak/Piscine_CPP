/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:27:39 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/23 18:55:27 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;38;5;150m"
#define END "\033[0m"

#define CYAN "\033[1;36m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define WHITE "\033[1;37m"

#define LIGHTDARK "\033[1;90m"

template<typename T>
class	Array {

	public:
		Array( ) {

			std::cout << GREEN "Default constructor called." END << std::endl;
			this->_array = NULL;
			this->_size = 0;
			return;
		}
		Array( unsigned int n ) : _size(n) {

			std::cout << GREEN "Parametric constructor called." END << std::endl;
			this->_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0;
			return ;
		}
		Array( Array & src ) {

			*this = src;
		}

		Array & operator=(const Array &src)
		{
			_size = src.size();
			_array = new T[_size];
			for (unsigned int i = 0; i < src.size(); i++)
				_array[i] = src._array[i];
			return *this;
		}

		~Array( void ) {

			std::cout << RED "Destructor called." END << std::endl;
			if (this->_array)
				delete [] (this->_array);
			return ;
		}

		unsigned int size( void ) const {

			//std::cout << CYAN "Size function called." END << std::endl;
			unsigned int i = this->_size;

			// for (i = 0; array[i] != '\0'; i++)
			// 	;
			return (i);
		}


		// specify which element is findable at tab[i] position
		T	&operator[]( unsigned int i ) {

			// std::cout << CYAN "Operator [] called." END << std::endl;
			if (!_array || i < 0 || i >= this->_size)
				throw Array::InvalidIndexException();
			return(this->_array[i]);
		}

		class InvalidIndexException : public std::exception {
			public:
				virtual const char* what()const throw() {
					return ("Error: invalid index");
				}
		};

	private:
		T	*_array;
		unsigned int	_size;
};

#endif
