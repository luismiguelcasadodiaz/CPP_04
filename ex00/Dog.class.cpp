#include "Dog.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Dog::Dog( void ) //constructor by default
{
	std::cout << "Default constructor called for Dog " << std::endl;
	std::cout << COLORDog << "Dog default constructor called." << RESETDog << std::endl;
	return ;
}

Dog::Dog(const Dog& other) //constructor by copy
{
	std::cout << COLORDog << "Dog copy constructor called." << RESETDog << std::endl;
	*this = other;
	return;
}

Dog &  Dog::operator=(const Dog & other)
{
	std::cout << COLORDog << "Dog copy assignment operator called." << RESETDog <<std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

Dog::~Dog( void ) // destructor
{
	std::cout << COLORDog << "Dog destructor called." << RESETDog << std::endl;
	return ;
}

// Constructor(s)
//Dog::Dog(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// public member functions
// protected  member functions

// private member funcions

// Helper functions for canonicalization
std::string Dog::canonizeme( void ) const {
	std::string _str_ = "No implemented yet";
	return (_str_);
}


std::ostream& operator<<(std::ostream& os, const Dog& obj)
{
	os << COLORDog << "Dog " << obj.canonizeme()  << RESETDog << std::endl;
	return os;
};

