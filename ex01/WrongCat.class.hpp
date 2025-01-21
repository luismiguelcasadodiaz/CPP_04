#ifndef WrongCat_H
# define WrongCat_H

# define RESETWrongCat  	"\033[0;39m"
//# define COLORWrongCat		"\033[0;90m"             //GRAY
//# define COLORWrongCat		"\033[0;91m"             //RED
//# define COLORWrongCat		"\033[0;92m"             //GREEN
//# define COLORWrongCat		"\033[38;2;75;179;82m"   //GREEN
//# define COLORWrongCat		"\033[0;93m"             //YELLOW
# define COLORWrongCat		"\033[0;94m"             //BLUE
//# define COLORWrongCat		"\033[0;95m"             //MAGENTA
//# define COLORWrongCat		"\033[0;96m"             //CYAN
//# define COLORWrongCat		"\033[0;97m"             //WHITE
//# define COLORWrongCat		"\033[0;99m"             //BLACK
//# define COLORWrongCat		"\033[38;5;209m"         //ORANGE
//# define COLORWrongCat		"\033[38;2;184;143;29m"  //BROWN
//# define COLORWrongCat		"\033[38;5;234m"         //DARK_GRAY
//# define COLORWrongCat		"\033[38;5;245m"         //MID_GRAY
//# define COLORWrongCat		"\033[38;2;75;179;82m"   //DARK_GREEN
//# define COLORWrongCat		"\033[38;5;143m"         //DARK_YELLOW
# include "WrongAnimal.class.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal {
	private:
		// Private member functions
	protected:
		// Protectd member functions
	public:
		// Canonical form 
		WrongCat( void ); //constructor by default
		WrongCat(const WrongCat& other); //constructor by copy
		WrongCat & operator=(const WrongCat & other);
		~WrongCat( void ); // destructor

		// Constructor(s)
		//WrongCat(${ARGS_LIST});

		// Getters

		// Setters

		// Oveloading of comparison operators

		// Public member functions
		void makeSound( void ) const;
		// Helper functions for canonicalization
};

std::ostream& operator<<(std::ostream& os, const WrongCat& obj);

#endif // WrongCat_H
