#ifndef Dog_H
# define Dog_H

# define RESETDog  	"\033[0;39m"
//# define COLORDog		"\033[0;90m"             //GRAY
//# define COLORDog		"\033[0;91m"             //RED
# define COLORDog		"\033[0;92m"             //GREEN
//# define COLORDog		"\033[38;2;75;179;82m"   //GREEN
//# define COLORDog		"\033[0;93m"             //YELLOW
//# define COLORDog		"\033[0;94m"             //BLUE
//# define COLORDog		"\033[0;95m"             //MAGENTA
//# define COLORDog		"\033[0;96m"             //CYAN
//# define COLORDog		"\033[0;97m"             //WHITE
//# define COLORDog		"\033[0;99m"             //BLACK
//# define COLORDog		"\033[38;5;209m"         //ORANGE
//# define COLORDog		"\033[38;2;184;143;29m"  //BROWN
//# define COLORDog		"\033[38;5;234m"         //DARK_GRAY
//# define COLORDog		"\033[38;5;245m"         //MID_GRAY
//# define COLORDog		"\033[38;2;75;179;82m"   //DARK_GREEN
//# define COLORDog		"\033[38;5;143m"         //DARK_YELLOW
# include "Animal.class.hpp"
# include <iostream>
# include <string>

class Dog : public Animal{
	private:
		// Private member functions
	protected:
		// Protectd member functions
	public:
		// Canonical form 
		Dog( void ); //constructor by default
		Dog(const Dog& other); //constructor by copy
		Dog & operator=(const Dog & other) ;
		~Dog( void ); // destructor

		// Constructor(s)
		//Dog(${ARGS_LIST});

		// Getters

		// Setters

		// Oveloading of comparison operators

		// Public member functions
		void virtual makeSound ( void ) const ;
		// Helper functions for canonicalization

};

std::ostream& operator<<(std::ostream& os, const Dog& obj);

#endif // Dog_H
