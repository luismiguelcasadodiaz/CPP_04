#include "Dog.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Dog::Dog( void ) //constructor by default
{
	std::cout << COLORDog << "Dog default constructor called." << RESETDog << std::endl;
	type = "Dog";
	_brain = new Brain("Dog's idea");
	_num_ideas = 0;
}

Dog::Dog(const Dog& other) //constructor by copy
{
	std::cout << COLORDog << "Dog copy constructor called." << RESETDog << std::endl;
	type = other.type;

	_brain = new Brain(*(other._brain));
	_num_ideas = other._num_ideas;
}

Dog &  Dog::operator=(const Dog & other)
{
	std::cout << COLORDog << "Dog copy assignment operator called." << RESETDog <<std::endl;
	if (this != &other)
	{
		type = other.type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*(other._brain));
		_num_ideas = other._num_ideas;
	}
	return *this; 
}

Dog::~Dog( ) {
	std::cout << COLORDog << "Dog destructor called." << RESETDog << std::endl;
	delete _brain;
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

void Dog::setIdea(std::string oneidea){
	_brain->setIdea(_num_ideas++, oneidea);
}
// protected  member functions

// private member funcions

// Helper functions for canonicalization
std::string Dog::canonizeme( void ) const{
	std::stringstream resultado;
	resultado << "I am a Dog" << std::endl << *_brain;
	return (resultado.str());
}



std::ostream& operator<<(std::ostream& os, const Dog& obj)
{
	os << COLORDog << "Dog " << obj.canonizeme()  << RESETDog << std::endl;
	return os;
};

