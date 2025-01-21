#include "WrongCat.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
WrongCat::WrongCat( void ) //constructor by default
{
	type = "WrongCat";
	std::cout << COLORWrongCat << "WrongCat default constructor called." << RESETWrongCat << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) //constructor by copy
{
	std::cout << COLORWrongCat << "WrongCat copy constructor called." << RESETWrongCat << std::endl;
	type = other.type;
}

WrongCat &  WrongCat::operator=(const WrongCat & other)
{
	std::cout << COLORWrongCat << "WrongCat copy assignment operator called." << RESETWrongCat <<std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this; 
}

WrongCat::~WrongCat( void ) // destructor
{
	type = "WrongCat";
	std::cout << COLORWrongCat << "WrongCat destructor called." << RESETWrongCat << std::endl;
}

// Constructor(s)
//WrongCat::WrongCat(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// public member functions
void WrongCat::makeSound( void ) const {
	std::cout << COLORWrongCat << type << " makes the sound of a WrongCat." << RESETWrongCat << std::endl;
}
// protected  member functions

// private member funcions

// Helper functions for canonicalization



std::ostream& operator<<(std::ostream& os, const WrongCat& obj)
{
	os << COLORWrongCat << "WrongCat " << obj.canonizeme()  << RESETWrongCat << std::endl;
	return os;
};

