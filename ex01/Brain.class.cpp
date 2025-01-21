#include "Brain.class.hpp"

//
// ::::::::::::::::::::::::::::Canonical form::::::::::::::::::::::::::::::::
//
Brain::Brain( void ) //constructor by default
{
	std::cout << COLORBrain << "Brain default constructor called." << RESETBrain << std::endl;
	for (std::size_t i = _min ; i <= _max ; i++)
		_ideas[i] = "No idea";
}

Brain::Brain(const Brain& other) //constructor by copy
{
	std::cout << COLORBrain << "Brain copy constructor called." << RESETBrain << std::endl;
	for (std::size_t i = _min ; i <= _max ; i++)
		_ideas[i] = other._ideas[i];
}

Brain &  Brain::operator=(const Brain & other)
{
	std::cout << COLORBrain << "Brain copy assignment operator called." << RESETBrain <<std::endl;
	if (this != &other)
	{
		for (std::size_t i = _min ; i <= _max ; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this; 
}

Brain::~Brain( void ) // destructor
{
	std::cout << COLORBrain << "Brain destructor called." << RESETBrain << std::endl;
	return ;
}

// Constructor(s)
Brain::Brain(std::string oneidea){
	std::cout << COLORBrain << "Brain parametric constructor called." << RESETBrain << std::endl;
	for (std::size_t i = _min ; i <= _max ; i++)
		_ideas[i] = oneidea;
}

// Getters
std::string Brain::getIdea(std::size_t i) const {
	if ( (_min <= i) && (i <= _max) )
		return _ideas[i];
	else {
		std::stringstream resultado;
		resultado << "NO SUCH IDEA [" << i << "]. Provide num in range ["<< _min << ".." << _max <<"]";
		std::cout << resultado.str() << std::endl;
		return ("");
	}
}
// Setters
void Brain::setIdea(std::size_t i, std::string oneidea) {
	if ( (_min <= i) && (i <= _max) )
	{
		_ideas[i] = oneidea;
		return ;
	}
	std::stringstream resultado;
	resultado << "NO SUCH IDEA [" << i << "]. Provide num in range ["<< _min << ".." << _max <<"]";
	std::cout << resultado.str() << std::endl;
}
// Comparison operators

// public member functions
// protected  member functions

// private member funcions

// Helper functions for canonicalization
std::string Brain::canonizeme( void ) const {

	std::stringstream resultado;
	for (std::size_t i = _min ; i <= _max ; i++)
		resultado << "idea[" << i << "]=" <<_ideas[i] << std::endl;
	return (resultado.str());
}


std::ostream& operator<<(std::ostream& os, const Brain& obj)
{
	os << COLORBrain << "Brain " << obj.canonizeme()  << RESETBrain << std::endl;
	return os;
};

