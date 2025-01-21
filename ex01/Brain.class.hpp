#ifndef Brain_H
# define Brain_H

# define RESETBrain  	"\033[0;39m"
//# define COLOR		"\033[0;90m"             //GRAY
//# define COLOR		"\033[0;91m"             //RED
//# define COLOR		"\033[0;92m"             //GREEN
//# define COLOR		"\033[38;2;75;179;82m"   //GREEN
//# define COLOR		"\033[0;93m"             //YELLOW
//# define COLOR		"\033[0;94m"             //BLUE
# define COLORBrain		"\033[0;95m"             //MAGENTA
//# define COLOR		"\033[0;96m"             //CYAN
//# define COLOR		"\033[0;97m"             //WHITE
//# define COLOR		"\033[0;99m"             //BLACK
//# define COLOR		"\033[38;5;209m"         //ORANGE
//# define COLOR		"\033[38;2;184;143;29m"  //BROWN
//# define COLOR		"\033[38;5;234m"         //DARK_GRAY
//# define COLOR		"\033[38;5;245m"         //MID_GRAY
//# define COLOR		"\033[38;2;75;179;82m"   //DARK_GREEN
//# define COLOR		"\033[38;5;143m"         //DARK_YELLOW
# include <iostream>
# include <string>
# include <sstream>

class Brain {
	private:
		static const std::size_t _min = 0;
		static const std::size_t _max = 4;
		std::string  _ideas[_max + 1];
		// Private member functions
	protected:
		// Protectd member functions
	public:

		// Canonical form 
		Brain( void ); //constructor by default
		Brain(const Brain& other); //constructor by copy
		Brain & operator=(const Brain & other);
		~Brain( void ); // destructor

		// Constructor(s)
		Brain(std::string oneidea);

		// Getters
		std::string getIdea(std::size_t i) const ; 

		// Setters
		void setIdea(std::size_t i, std::string oneidea) ; 
		// Oveloading of comparison operators

		// Public member functions

		// Helper functions for canonicalization
		std::string canonizeme( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Brain& obj);

#endif // Brain_H
