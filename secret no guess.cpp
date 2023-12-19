///Number Guesssing game///

#include<iostream>
#include<cstdlib>
#include<ctime>


int main(){
	// Seed the random number generator
	std::srand(static_cast<unsigned int>(std::time(0)));
	
	// Generate a random number between 1 and 100
	int secretNumber = std::rand() %100+1;
	
	// Initialize user's guess to an invalid value
	int userGuess = 0;
	
	std::cout<<"Welcome to the Guess the Number game!\n";
	
	while (userGuess!= secretNumber){
		std::cout<<"Guess the number between 1 and 100:";
		std::cin>> userGuess;
		
		// Provide feedback on the guess
		if (userGuess < secretNumber){
			std::cout<< "Too low! Try again.\n";
		}
		else if (userGuess > secretNumber){
			std::cout<<"Too high! Try again.\n";
			
		} 
		else{
			std::cout<<"Congratulations! You've guessed the correct number"<< secretNumber <<"!\n";
		}
	}
	
	return 0;
	}
