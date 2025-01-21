#include "Cat.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Cat::Cat( void ) //constructor by default
{
	std::cout << COLORCat << "Cat default constructor called." << RESETCat << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) //constructor by copy
{
	std::cout << COLORCat << "Cat copy constructor called." << RESETCat << std::endl;
	type = other.type;
}

Cat &  Cat::operator=(const Cat & other)
{
	std::cout << COLORCat << "Cat copy assignment operator called." << RESETCat <<std::endl;
	if (this != &other)
	{
		type = other.type;
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

void Cat::makeSound( void ) const {
	std::cout << COLORCat << type << " makes the sound of a Cat. " << RESETCat << std::endl;
}
// protected  member functions

// private member funcions


// Helper functions for canonicalization



std::ostream& operator<<(std::ostream& os, const Cat& obj)
{
	os << COLORCat << "Cat " << obj.canonizeme()  << RESETCat << std::endl;
	return os;
};

