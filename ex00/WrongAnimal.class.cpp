#include "WrongAnimal.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
WrongAnimal::WrongAnimal( void ) //constructor by default
{
	std::cout << "Default constructor called for WrongAnimal " << std::endl;
	std::cout << COLORWrongAnimal << "WrongAnimal default constructor called." << RESETWrongAnimal << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) //constructor by copy
{
	std::cout << COLORWrongAnimal << "WrongAnimal copy constructor called." << RESETWrongAnimal << std::endl;
	*this = other;
	return;
}

WrongAnimal &  WrongAnimal::operator=(const WrongAnimal & other)
{
	std::cout << COLORWrongAnimal << "WrongAnimal copy assignment operator called." << RESETWrongAnimal <<std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

WrongAnimal::~WrongAnimal( void ) // destructor
{
	std::cout << COLORWrongAnimal << "WrongAnimal destructor called." << RESETWrongAnimal << std::endl;
	return ;
}

// Constructor(s)
//WrongAnimal::WrongAnimal(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// public member functions
// protected  member functions

// private member funcions

// Helper functions for canonicalization
std::string WrongAnimal::canonizeme( void ) const {
	std::string _str_ = "No implemented yet";
	return (_str_);
}


std::ostream& operator<<(std::ostream& os, const WrongAnimal& obj)
{
	os << COLORWrongAnimal << "WrongAnimal " << obj.canonizeme()  << RESETWrongAnimal << std::endl;
	return os;
};

