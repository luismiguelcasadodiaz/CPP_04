#include "Dog.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Dog::Dog( void ) //constructor by default
{
	std::cout << COLORDog << "Dog default constructor called." << RESETDog << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) //constructor by copy
{
	std::cout << COLORDog << "Dog copy constructor called." << RESETDog << std::endl;
	type = other.type;
}

Dog &  Dog::operator=(const Dog & other)
{
	std::cout << COLORDog << "Dog copy assignment operator called." << RESETDog <<std::endl;
	if (this != &other)
	{
		type = other.type;
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
void Dog::makeSound( void ) const {
	std::cout << COLORDog << type << "  makes the sound of a Dog. " << RESETDog << std::endl;
}
// protected  member functions

// private member funcions

// Helper functions for canonicalization



std::ostream& operator<<(std::ostream& os, const Dog& obj)
{
	os << COLORDog << "Dog " << obj.canonizeme()  << RESETDog << std::endl;
	return os;
};

