#include "Cat.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Cat::Cat( void ) //constructor by default
{
	std::cout << "Default constructor called for Cat " << std::endl;
	std::cout << COLORCat << "Cat default constructor called." << RESETCat << std::endl;
	return ;
}

Cat::Cat(const Cat& other) //constructor by copy
{
	std::cout << COLORCat << "Cat copy constructor called." << RESETCat << std::endl;
	*this = other;
	return;
}

Cat &  Cat::operator=(const Cat & other)
{
	std::cout << COLORCat << "Cat copy assignment operator called." << RESETCat <<std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

Cat::~Cat( void ) // destructor
{
	std::cout << COLORCat << "Cat destructor called." << RESETCat << std::endl;
	return ;
}

// Constructor(s)
//Cat::Cat(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// public member functions
// protected  member functions

// private member funcions

// Helper functions for canonicalization
std::string Cat::canonizeme( void ) const {
	std::string _str_ = "No implemented yet";
	return (_str_);
}


std::ostream& operator<<(std::ostream& os, const Cat& obj)
{
	os << COLORCat << "Cat " << obj.canonizeme()  << RESETCat << std::endl;
	return os;
};

