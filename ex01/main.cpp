/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:39:45 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/18 11:41:29 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"

#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Brain.class.hpp"

int main()
{
	/*
	{
	std::cout << "==== FIRST CONTEXT: makeSound() is virtual =============" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "------------------printing types << ----------------" << std::endl;
	std::cout << meta->getType() << " is the type of an Animal pointer to  Animal " << std::endl;
	std::cout << j->getType() << " is the type of an Animal pointer to  Dog " << std::endl;
	std::cout << i->getType() << " is the type of an Animal pointer to  Cat" << std::endl;
	std::cout << "------------------make sounds << ----------------" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "------------------impresiones sobrecarga << ----------------" << std::endl;
	std::cout << *meta << std::endl;
	std::cout << *i << std::endl;
	std::cout << *j << std::endl;

	std::cout << "------------------ destruction step  << ----------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	}
	{
	std::cout << "==== SECOND CONTEXT: makeSound() is normal =============" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << "------------------printing wrong types << ----------------" << std::endl;
	std::cout << wmeta->getType() << " is the type of an WrongAnimal pointer to  WrongAnimal " << std::endl;
	std::cout << wi->getType() << " is the type of an WrongAnimal pointer to  WrongCat" << std::endl;
	std::cout << "------------------make wrong sounds << ----------------" << std::endl;
	wmeta->makeSound();
	wi->makeSound(); 
	std::cout << "------------------ destruction step  << ----------------" << std::endl;

	delete wmeta;
	delete wi;
	}
	*/
/*	
	std::cout << "==== THIRD CONTEXT: Brains =============" << std::endl;

	{	
		
		Brain* brain = new Brain();
		std::cout << "------------------printing idea 0 and 100 << ----------------" << std::endl;
		std::cout << ">" << brain->getIdea(0) << "<" << std::endl;
		std::cout << ">" << brain->getIdea(100)<< "<" << std::endl;
		std::cout << "------------------printing all ideas << ----------------" << std::endl;
		std::cout << *brain << std::endl;
		std::cout << "------------------ destruction step  << ----------------" << std::endl;
		delete brain;
		std::cout << "------------------ testing copy  << ----------------" << std::endl;
		Brain one;
		Brain two;
		std::cout << one << std::endl;
		one.setIdea(0, "[one] got idea 0");
		std::cout << "one>" << one.getIdea(0) << "<" << std::endl;
		std::cout << "two>" << two.getIdea(0) << "<" << std::endl;
		two = one;
		std::cout << "two>" << two.getIdea(0) << "<" << std::endl;

		std::cout << two << std::endl;
	}
*/
	{
		std::cout << "==== FOURTH CONTEXT: static Animals with Brains =============" << std::endl;
		std::cout << "------------------ Leak test  << ----------------" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	

	{
		std::cout << "==== FIFTH CONTEXT: static Animals with Brains =============" << std::endl;
		const std::size_t N = 4;
		Animal pack[N];
		
		for (std::size_t i = 0; i < N; i++){
			if (i % 2  == 0)
				pack[i] = Cat();
			else
				pack[i] = Dog();
			pack[i].makeSound();
		}
	}
	{
		std::cout << "==== SIXTH CONTEXT: Pointers to  Animals with Brains =============" << std::endl;
		const std::size_t N = 4;
		Animal* pack[N];

		for (std::size_t i = 0; i < N; i++){
			if (i % 2  == 0)
				pack[i] = new Cat();
			else
				pack[i] = new Dog();
			pack[i]->makeSound();
		}
		for (std::size_t i = 0; i < N; i++)
			delete pack[i];
	}

	{
		std::cout << "==== SEVENTH CONTEXT: copy with constructor " << std::endl;

		Dog dog_one = Dog();

		dog_one.setIdea("Dog one's first new idea");
		dog_one.setIdea("Dog one's second new idea");
		dog_one.setIdea("Dog one's third new idea");
		std::cout << "----- dog_one -----" << std::endl;
		std::cout << dog_one << std::endl;

		Dog dog_two(dog_one);
		std::cout << "----- dog_two -----" << std::endl;
		dog_two.setIdea("Dog two's fourth new idea");
		std::cout << dog_two << std::endl;
		std::cout << "----- dog_one -----" << std::endl;
		std::cout << dog_one << std::endl;

	}

	{
		std::cout << "==== EIGHTTH CONTEXT: Copy EQUAL operator =============" << std::endl;

		Dog dog_one = Dog();

		dog_one.setIdea("Dog one's first new idea");
		dog_one.setIdea("Dog one's second new idea");
		dog_one.setIdea("Dog one's third new idea");
		std::cout << "----- dog_one -----" << std::endl;
		std::cout << dog_one << std::endl;

		Dog dog_two;
		dog_two = dog_one;
		std::cout << "----- dog_two -----" << std::endl;
		dog_two.setIdea("Dog two's fourth new idea");
		std::cout << dog_two << std::endl;
		std::cout << "----- dog_one -----" << std::endl;
		std::cout << dog_one << std::endl;

		dog_two = dog_one;
		std::cout << "----- dog_two second time -----" << std::endl;
		dog_two.setIdea("Dog two's fith new idea");
		std::cout << dog_two << std::endl;
		std::cout << "----- dog_one -----" << std::endl;
		std::cout << dog_one << std::endl;
	}
/*
	{
		std::cout << "------------------Brains initial states has no ideas ----------------" << std::endl;	

		for (std::size_t i = 0; i < N; i++){
			std::cout << pack[i] ;
			pack[i].makeSound();
			// if (i % 2  == 0)
			// 	dynamic_cast<Cat*>(pack[i])->makeSound();
			// else
			// 	dynamic_cast<Dog*>(pack[i])->makeSound();
			
		}

		std::cout << "------------------Brain states after first dog think ----------------" << std::endl;

		// dynamic_cast<Dog*>(pack[1])->setIdea("Dog-s first new idea");
		// dynamic_cast<Dog*>(pack[1])->setIdea("Dog-s second new idea");
		// dynamic_cast<Dog*>(pack[1])->setIdea("Dog-s third new idea");

		dynamic_cast<Dog*>(&pack[1])->setIdea("Dog-s first new idea");
		dynamic_cast<Dog*>(&pack[1])->setIdea("Dog-s second new idea");
		dynamic_cast<Dog*>(&pack[1])->setIdea("Dog-s third new idea");

		for (std::size_t i = 0; i < N; i++)
			std::cout << pack[i] << std::endl;
		std::cout << "------------------Brain states after second dog gets first dog's brain ----------------" << std::endl;

		pack[3] = pack[1];
		for (std::size_t i = 0; i < N; i++)
			std::cout << pack[i] << std::endl;

		std::cout << "------------------Brain states after back[i]=pack[1]; ----------------" << std::endl;
		for (std::size_t i = 0; i < N; i++){
			back[i] = pack[i];
			std::cout << back[i] << std::endl;
		}
		//Dog* copied = dynamic_cast<Dog*>(pack[1]);	
		
		//for (std::size_t i = 0; i < N; i++)
		//	std::cout << *copied << std::endl;

		std::cout << "------------------ Brain copies destruction step  << ----------------" << std::endl;
		// for (std::size_t i = 0; i < N; i++) {
		// 	delete back[i];

		// }
		// for (std::size_t i = 0; i < N; i++) {
		// 	delete *(pack[i]);

		// }
	}


	{
		std::cout << "------------------ deep copy test << ----------------" << std::endl;
		Dog basicDog;
		basicDog.setIdea("BasicDog first idea");
		std::cout << basicDog << std::endl;
		Dog tmpDog = basicDog;
		std::cout << tmpDog << std::endl;

		Cat basicCat;
		basicCat.setIdea("BasicCat first idea");
		std::cout << basicCat << std::endl;
		Cat tmpCat(basicCat);
		std::cout << tmpCat << std::endl;
	}

*/
	return 0;
}
