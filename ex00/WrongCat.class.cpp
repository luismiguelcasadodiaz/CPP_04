#include "WrongCat.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
WrongCat::WrongCat( void ) //constructor by default
{
	std::cout << "Default constructor called for WrongCat " << std::endl;
	std::cout << COLORWrongCat << "WrongCat default constructor called." << RESETWrongCat << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& other) //constructor by copy
{
	std::cout << COLORWrongCat << "WrongCat copy constructor called." << RESETWrongCat << std::endl;
	*this = other;
	return;
}

WrongCat &  WrongCat::operator=(const WrongCat & other)
{
	std::cout << COLORWrongCat << "WrongCat copy assignment operator called." << RESETWrongCat <<std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

WrongCat::~WrongCat( void ) // destructor
{
	std::cout << COLORWrongCat << "WrongCat destructor called." << RESETWrongCat << std::endl;
	return ;
}

// Constructor(s)
//WrongCat::WrongCat(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// public member functions
// protected  member functions

// private member funcions

// Helper functions for canonicalization
std::string WrongCat::canonizeme( void ) const {
	std::string _str_ = "No implemented yet";
	return (_str_);
}


std::ostream& operator<<(std::ostream& os, const WrongCat& obj)
{
	os << COLORWrongCat << "WrongCat " << obj.canonizeme()  << RESETWrongCat << std::endl;
	return os;
};

