#ifndef Cat_H
# define Cat_H

# define RESETCat  	"\033[0;39m"
//# define COLORCat		"\033[0;90m"             //GRAY
# define COLORCat		"\033[0;91m"             //RED
//# define COLORCat		"\033[0;92m"             //GREEN
//# define COLORCat		"\033[38;2;75;179;82m"   //GREEN
//# define COLORCat		"\033[0;93m"             //YELLOW
//# define COLORCat		"\033[0;94m"             //BLUE
//# define COLORCat		"\033[0;95m"             //MAGENTA
//# define COLORCat		"\033[0;96m"             //CYAN
//# define COLORCat		"\033[0;97m"             //WHITE
//# define COLORCat		"\033[0;99m"             //BLACK
//# define COLORCat		"\033[38;5;209m"         //ORANGE
//# define COLORCat		"\033[38;2;184;143;29m"  //BROWN
//# define COLORCat		"\033[38;5;234m"         //DARK_GRAY
//# define COLORCat		"\033[38;5;245m"         //MID_GRAY
//# define COLORCat		"\033[38;2;75;179;82m"   //DARK_GREEN
//# define COLORCat		"\033[38;5;143m"         //DARK_YELLOW
# include <iostream>
# include <string>

class Cat {
	private:
		// Private member functions
	protected:
		// Protectd member functions
	public:
		// Canonical form 
		Cat( void ); //constructor by default
		Cat(const Cat& other); //constructor by copy
		Cat & operator=(const Cat & other);
		~Cat( void ); // destructor

		// Constructor(s)
		//Cat(${ARGS_LIST});

		// Getters

		// Setters

		// Oveloading of comparison operators

		// Public member functions

		// Helper functions for canonicalization
		std::string canonizeme( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Cat& obj);

#endif // Cat_H
