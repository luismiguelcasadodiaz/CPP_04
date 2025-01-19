#include "Brain.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Brain::Brain( void ) //constructor by default
{
	std::cout << "Default constructor called for Brain " << std::endl;
	std::cout << COLOR << "Brain default constructor called." << RESET << std::endl;
	return ;
}

Brain::Brain(const Brain& other) //constructor by copy
{
	std::cout << COLOR << "Brain copy constructor called." << RESET << std::endl;
	*this = other;
	return;
}

Brain &  Brain::operator=(const Brain & other)
{
	std::cout << COLOR << "Brain copy assignment operator called." << RESET <<std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

Brain::~Brain( void ) // destructor
{
	std::cout << COLOR << "Brain destructor called." << RESET << std::endl;
	return ;
}

// Constructor(s)
//Brain::Brain(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// public member functions
// protected  member functions

// private member funcions

// Helper functions for canonicalization
std::string Brain::canonizeme( void ) const {
	std::string _str_ = "No implemented yet";
	return (_str_);
}


std::ostream& operator<<(std::ostream& os, const Brain& obj)
{
	os << COLOR << "Brain " << obj.canonizeme()  << RESET << std::endl;
	return os;
};

