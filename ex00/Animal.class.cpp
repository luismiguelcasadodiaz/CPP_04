#include "Animal.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Animal::Animal( void ) //constructor by default
{
	std::cout << "Default constructor called for Animal " << std::endl;
	std::cout << COLORAnimal << "Animal default constructor called." << RESETAnimal << std::endl;
	return ;
}

Animal::Animal(const Animal& other) //constructor by copy
{
	std::cout << COLORAnimal << "Animal copy constructor called." << RESETAnimal << std::endl;
	*this = other;
	return;
}

Animal &  Animal::operator=(const Animal & other)
{
	std::cout << COLORAnimal << "Animal copy assignment operator called." << RESETAnimal <<std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

Animal::~Animal( void ) // destructor
{
	std::cout << COLORAnimal << "Animal destructor called." << RESETAnimal << std::endl;
	return ;
}

// Constructor(s)
//Animal::Animal(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// public member functions
// protected  member functions
void Animal::makeSound() const{
	std::cout << COLORAnimal << type << "makes undefined sound" << RESETAnimal<< std::endl
}

// private member funcions

// Helper functions for canonicalization
std::string Animal::canonizeme( void ) const {
	std::string _str_ = "No implemented yet";
	return (_str_);
}


std::ostream& operator<<(std::ostream& os, const Animal& obj)
{
	os << COLORAnimal << "Animal " << obj.canonizeme()  << RESETAnimal << std::endl;
	return os;
};

