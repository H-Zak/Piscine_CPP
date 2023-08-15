/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:27:39 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/16 01:28:22 by zakariyaham      ###   ########.fr       */
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
		Array( void ) {

			std::cout << GREEN "Default constructor called." END << std::endl;
			this->_array = NULL;
			this->_n = 0;
			return;
		}
		Array( unsigned int n ) : _n(n) {

			std::cout << GREEN "Parametric constructor called." END << std::endl;
			this->_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0;
			return ;
		}
		Array( Array & src ) {

			*this = ref;
		}

		Array & operator=(const Array &ref)
		{
			_size = ref.size();
			_array = new T[_size];
			for (int i = 0; i < ref.size(); i++)
				_array[i] = ref._array[i];
			return *this;
		}

		~Array( void ) {

			std::cout << RED "Destructor called." END << std::endl;
			if (this->_array)
				delete [] (this->_array);
			return ;
		}

		unsigned int size( void ) {

			std::cout << CYAN "Size function called." END << std::endl;
			unsigned int i = this->_n;

			// for (i = 0; array[i] != '\0'; i++)
			// 	;
			return (i);
		}


		// specify which element is findable at tab[i] position
		T	&operator[]( unsigned int i ) {

			// std::cout << CYAN "Operator [] called." END << std::endl;
			if (!_array || i < 0 || i >= this->_n)
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
		unsigned int	_n;
};

#endif
