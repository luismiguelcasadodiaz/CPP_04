#include "Cat.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Cat::Cat( void ) //constructor by default
{
	std::cout << COLORCat << "Cat default constructor called." << RESETCat << std::endl;
	type = "Cat";
	_brain = new Brain("Cat's Idea");
	_num_ideas = 0;
}

Cat::Cat(const Cat& other) //constructor by copy
{
	std::cout << COLORCat << "Cat copy constructor called." << RESETCat << std::endl;
	type = other.type;
	delete _brain;
	_brain = other._brain;
	_num_ideas = other._num_ideas;
}

Cat &  Cat::operator=(const Cat & other)
{
	std::cout << COLORCat << "Cat copy assignment operator called." << RESETCat <<std::endl;
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


Cat::~Cat( ) // destructor
{
	std::cout << COLORCat << "Cat destructor called." << RESETCat << std::endl;
	delete _brain;

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

void Cat::setIdea(std::string oneidea){
	_brain->setIdea(_num_ideas++, oneidea);
}
// protected  member functions

// private member funcions


// Helper functions for canonicalization
std::string Cat::canonizeme( void ) const{
	std::stringstream resultado;
	resultado << "I am a Cat" << std::endl << *_brain;
	return (resultado.str());
}


std::ostream& operator<<(std::ostream& os, const Cat& obj)
{
	os << COLORCat << "Cat " << obj.canonizeme()  << RESETCat << std::endl;
	return os;
};

