/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:09:31 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/22 13:53:01 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\n--------------- Constructors ---------------\n";
	ClapTrap myPokemon("Pikachu");
	ClapTrap wildPokemon("Rattata");

	std::cout << "\n--------------- BATTLE ---------------\n";
	std::cout << "You've encountered a wild "<< wildPokemon.getName() << "!\n";
	std::cout << "Go "<< myPokemon.getName() << "!\n";
	std::cout << "Wild "<< wildPokemon.getName() << " wants to battle!\n";
	
	std::cout << GREEN << myPokemon.getName() << " use Agility!\n";
	myPokemon.attack(wildPokemon.getName());
	std::cout << RESET_COLOR;
	
	wildPokemon.takeDamage(0);
	std::cout << wildPokemon.getName() << " use Defense Curl!\n";
	wildPokemon.attack(myPokemon.getName());
	
	std::cout << RED;
	myPokemon.takeDamage(0);
	std::cout << RESET_COLOR;


	std::cout << GREEN << "Player used a Potion on " << myPokemon.getName() << "!\n";
	myPokemon.beRepaired(10);
	std::cout << RESET_COLOR;

	std::cout << "The wild " << wildPokemon.getName() << " fled!\n";
	
	
	std::cout << "\n--------------- Destructors ---------------\n";
	return (0);
}



// MORE TESTS

// int	main(void)
// {
// 	std::cout << "\n--------------- Constructors ---------------\n";

// 	ClapTrap clap1("Rafa");
// 	ClapTrap clap2;


// 	std::cout << "\n--------------- Copy Constructor Test ---------------\n";
// 	ClapTrap clap3(clap2);
// 	std::cout << "clap3 name: " << clap3.getName() << "\n";
	
	
// 	std::cout << "\n--------------- Copy Assingment Constructor Test ---------------\n";
// 	std::cout << "clap1 name: " << clap1.getName() << " - (Before copy assingment)\n";
// 	clap1 = clap2;
// 	std::cout << "clap1 name: " << clap1.getName() << " - (After copy assingment)\n";
	

// 	std::cout << "\n--------------- No Hit Points Left ---------------\n";
// 	clap1.takeDamage(20);
// 	clap1.beRepaired(10);
// 	clap1.attack(clap2.getName());
	
// 	std::cout << "\n--------------- No Energy Points Left ---------------\n";
// 	clap3.beRepaired(10);
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
// 	clap3.attack(clap2.getName());
	
// 	std::cout << "\n--------------- Destructors ---------------\n";
// 	return (0);	
// }
