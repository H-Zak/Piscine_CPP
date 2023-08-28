/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:09:11 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/29 00:49:26 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RNP.hpp"


RNP::RNP()
{

	return;
}

RNP::RNP(std::string str)
{
	parsing(str);
	return;
}

RNP::RNP(RNP const &other)
{
	*this = other;
	return;
}

RNP &RNP::operator=(RNP const &other)
{
	if (this != &other)
	{
		this->list= other.getlist();

	}
	return(*this);
}

RNP::~RNP()
{

	return;
}

std::stack<float> RNP::getlist(void) const
{
	return(this->list);
}


bool areFirstTwoDigits(const std::string& str) {
	size_t i = 0;

	// Ignorer les espaces
	while (i < str.length() && std::isspace(str[i])) {
		i++;
	}

	// Vérifier si les deux premiers caractères sont des chiffres
	if (i < str.length() && std::isdigit(str[i])) {
		i++;
		while (i < str.length() && std::isspace(str[i])) {
		i++;
   		}
		if (i < str.length() && std::isdigit(str[i])) {
			return true;
		}
	}

	return false;
}

bool Check_digit_and_Space(const std::string& str)
{
	size_t i = 0;
	size_t j = 0;
	size_t nb_digit = 0;
	size_t nb_op = 0;
	// size_t is_digit = 0;

	// Ignorer les espaces
	while (i < str.length())
	{
		while (i < str.length() && std::isspace(str[i])) {
			i++;
		}
		if (j != 0 && j == i)
			throw(std::invalid_argument("incorrect input, forgot a space"));
		// Vérifier si les deux premiers caractères sont des chiffres
		if (i < str.length() && std::isdigit(str[i]))
		{
			i++;
			nb_digit++;
			// is_digit++;
		}
		else if (i < str.length() && (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'))
		{
			i++;
			nb_op++;
		}
		else
		{
			if (i < str.length())
				throw(std::invalid_argument("incorrect input, what did you put"));
			return (true);
		}
		j = i;

	}
	if (nb_digit != (nb_op + 1))
	{
		std::cout << "nombre de digit : " << nb_digit << " nombre d'operator : " << nb_op << std::endl;
		throw(std::invalid_argument("incorrect input, you need N number and N-1 operator"));

	}
	return (true);
}

bool isLastCharOperator(const std::string& input)
{
	size_t lastNonSpaceIndex = input.find_last_not_of(' ');

	if (lastNonSpaceIndex != std::string::npos)
	{
		char lastChar = input[lastNonSpaceIndex];
		if (lastChar == '+' || lastChar == '-' || lastChar == '*' || lastChar == '/')
			return (true);
		else
			return (false);
	}
	return false;
}

//deux chiffre pour commencer : done
//un operateur pour finir : done
// peu avoir un enchainement d'operateur ou de chiffre
//push sur stack jusqu'a operator puis appliquer operateur sur les 2 premiers
//verifier qu'il y a n chiffre et n-1 operator et en meme temps verifier qu'il y a que des chiffres

void RNP::list_move(float &first, float &second, std::string str, float &result, size_t &i)
{
	first = list.top();
	list.pop();
	second = list.top();
	list.pop();
	if (str[i] == '+')
		result = first + second;
	if (str[i] == '*')
		result = first * second;
	if (str[i] == '-')
		result = first - second;
	if (str[i] == '/')
		result = first / second;
	list.push(result);
	i++;
}


void	RNP::Execute(std::string &str)
{
	size_t i = 0;
	float first = 0;
	float second = 0;
	float result = 0;
	while (i < str.length())
	{
		switch (str[i])
		{
		case '+':
			list_move(first, second, str, result, i);
			break;
		case '-':
			list_move(first, second, str, result, i);
			break;
		case '*':
			list_move(first, second, str, result, i);
			break;
		case '/':
			list_move(first, second, str, result, i);
			break;
		default:
			if (std::isdigit(str[i]))
			{
				list.push(static_cast<float>(str[i] - '0'));
				i++;
			}
			else
				i++;
		}
	}
	std::cout << list.top() << std::endl;
}


void RNP::parsing(std::string str)
{
	size_t found = str.find_first_not_of("1234567890 +-*/");
	if (found != std::string::npos)
		throw(std::invalid_argument("incorrect input"));
	if (!areFirstTwoDigits(str))
		throw(std::invalid_argument("the first two caracter are not digit"));
	if (!isLastCharOperator(str))
		throw(std::invalid_argument("the last caracter is not an operator"));
	Check_digit_and_Space(str);
	Execute(str);
	return ;
}
