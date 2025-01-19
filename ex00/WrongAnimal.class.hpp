#ifndef WrongAnimal_H
# define WrongAnimal_H

# define RESETWrongAnimal  	"\033[0;39m"
//# define COLORWrongAnimal		"\033[0;90m"             //GRAY
//# define COLORWrongAnimal		"\033[0;91m"             //RED
//# define COLORWrongAnimal		"\033[0;92m"             //GREEN
//# define COLORWrongAnimal		"\033[38;2;75;179;82m"   //GREEN
# define COLORWrongAnimal		"\033[0;93m"             //YELLOW
//# define COLORWrongAnimal		"\033[0;94m"             //BLUE
//# define COLORWrongAnimal		"\033[0;95m"             //MAGENTA
//# define COLORWrongAnimal		"\033[0;96m"             //CYAN
//# define COLORWrongAnimal		"\033[0;97m"             //WHITE
//# define COLORWrongAnimal		"\033[0;99m"             //BLACK
//# define COLORWrongAnimal		"\033[38;5;209m"         //ORANGE
//# define COLORWrongAnimal		"\033[38;2;184;143;29m"  //BROWN
//# define COLORWrongAnimal		"\033[38;5;234m"         //DARK_GRAY
//# define COLORWrongAnimal		"\033[38;5;245m"         //MID_GRAY
//# define COLORWrongAnimal		"\033[38;2;75;179;82m"   //DARK_GREEN
//# define COLORWrongAnimal		"\033[38;5;143m"         //DARK_YELLOW
# include <iostream>
# include <string>

class WrongAnimal {
	private:
		// Private member functions
	protected:
		// Protectd member functions
	public:
		// Canonical form 
		WrongAnimal( void ); //constructor by default
		WrongAnimal(const WrongAnimal& other); //constructor by copy
		WrongAnimal & operator=(const WrongAnimal & other);
		~WrongAnimal( void ); // destructor

		// Constructor(s)
		//WrongAnimal(${ARGS_LIST});

		// Getters

		// Setters

		// Oveloading of comparison operators

		// Public member functions

		// Helper functions for canonicalization
		std::string canonizeme( void ) const;
};

std::ostream& operator<<(std::ostream& os, const WrongAnimal& obj);

#endif // WrongAnimal_H
