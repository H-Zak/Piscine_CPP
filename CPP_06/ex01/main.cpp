/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:18:03 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 22:02:30 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data*>(raw));
}

int main() {

	Data data;

	data.value = "Hello";
	uintptr_t raw = 0;
	Data *ptr;

	std::cout << "[BEFORE SERIALIZATION]" << std::endl;

	std::cout << "adress: " << &data.value << std::endl;
	std::cout << "value: " << data.value << std::endl;
	std::cout << "value raw : " << raw << std::endl;
	std::cout << "value raw : " << &raw << std::endl;
	raw = serialize(&data);

	std::cout << "[AFTER SERIALIZATION]" << std::endl;

	std::cout << "adress: " << &data.value << std::endl;
	std::cout << "value: " << data.value << std::endl;
	std::cout << "value raw : " << raw << std::endl;
	std::cout << "value raw : " << &raw << std::endl;

	ptr = deserialize(raw);

	std::cout  << "[AFTER DESERIALIZATION]" << std::endl;

	std::cout << "adress: " << &ptr->value << std::endl;
	std::cout << "value: " << ptr->value << std::endl;
	std::cout << "value raw : " << raw << std::endl;
	std::cout << "value raw : " << &raw << std::endl;
}
