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

int main()
{
	{
		std::cout << "==== FIRST CONTEXT (DYNAMIC): makeSound() is virtual =============" << std::endl;
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


		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "==== SECOND CONTEXT (DYNAMIC): makeSound() is normal =============" << std::endl;
		const WrongAnimal* wmeta = new WrongAnimal();
		const WrongAnimal* wi = new WrongCat();

		std::cout << "------------------printing wrong types << ----------------" << std::endl;
		std::cout << wmeta->getType() << " is the type of an WrongAnimal pointer to  WrongAnimal " << std::endl;
		std::cout << wi->getType() << " is the type of an WrongAnimal pointer to  WrongCat" << std::endl;
		std::cout << "------------------make wrong sounds << ----------------" << std::endl;
		wmeta->makeSound();
		wi->makeSound(); 


		delete wmeta;
		delete wi;
	}

	{
		std::cout << "==== THIRD CONTEXT (STATIC): makeSound() is virtual =============" << std::endl;
		const Animal meta;
		const Dog j;
		const Cat i;

		std::cout << "------------------printing types << ----------------" << std::endl;
		std::cout << meta.getType() << " is the type of an Animal pointer to  Animal " << std::endl;
		std::cout << j.getType() << " is the type of an Animal pointer to  Dog " << std::endl;
		std::cout << i.getType() << " is the type of an Animal pointer to  Cat" << std::endl;
		std::cout << "------------------make sounds << ----------------" << std::endl;
		i.makeSound(); //will output the cat sound!
		j.makeSound();
		meta.makeSound();

		std::cout << "------------------impresiones sobrecarga << ----------------" << std::endl;
		std::cout << meta << std::endl;
		std::cout << i << std::endl;
		std::cout << j << std::endl;
	}

return 0;
}
