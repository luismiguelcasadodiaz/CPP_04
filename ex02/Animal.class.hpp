#ifndef Animal_H
# define Animal_H

# define RESETAnimal  	"\033[0;39m"
# define COLORAnimal		"\033[0;90m"             //GRAY
//# define COLORAnimal		"\033[0;91m"             //RED
//# define COLORAnimal		"\033[0;92m"             //GREEN
//# define COLORAnimal		"\033[38;2;75;179;82m"   //GREEN
//# define COLORAnimal		"\033[0;93m"             //YELLOW
//# define COLORAnimal		"\033[0;94m"             //BLUE
//# define COLORAnimal		"\033[0;95m"             //MAGENTA
//# define COLORAnimal		"\033[0;96m"             //CYAN
//# define COLORAnimal		"\033[0;97m"             //WHITE
//# define COLORAnimal		"\033[0;99m"             //BLACK
//# define COLORAnimal		"\033[38;5;209m"         //ORANGE
//# define COLORAnimal		"\033[38;2;184;143;29m"  //BROWN
//# define COLORAnimal		"\033[38;5;234m"         //DARK_GRAY
//# define COLORAnimal		"\033[38;5;245m"         //MID_GRAY
//# define COLORAnimal		"\033[38;2;75;179;82m"   //DARK_GREEN
//# define COLORAnimal		"\033[38;5;143m"         //DARK_YELLOW
# include <iostream>
# include <string>

class Animal {
	private:
		// Private member functions
	protected:
		std::string type;
		// Protectd member functions

	public:
		// Canonical form 
		Animal( void ); //constructor by default
		Animal(const Animal& other); //constructor by copy
		Animal & operator=(const Animal & other);
		virtual ~Animal( void ); // destructor

		// Constructor(s)
		//Animal(${ARGS_LIST});

		// Getters

		// Setters

		// Oveloading of comparison operators

		// Public member functions
		void virtual makeSound() const = 0;
		std::string getType( void ) const ;
		// Helper functions for canonicalization
		virtual std::string canonizeme( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Animal& obj);

#endif // Animal_H
