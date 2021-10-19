#include <iostream>
#include <string>
#include "Dice.h"


int main() {

	// Variables
	std::string userInput;
	int numDice;
	std::string d4 = "d4", d6 = "d6", d8 = "d8", d10 = "d10", d12 = "d12", d20 = "d20";
	int result = 0;
	char repeat = 'y';


	// Main
	std::cout << "Welcome to the Dice Roller!\n";
	
	while (repeat == 'y') {
		
		// Intro blurb
		std::cout << "Type the number of dice you want to roll followed by the type of dice you want rolled(e.g. 4d6). Type [q] to quit:\n";
		std::cin >> userInput;
		

		// Exception handle for stoi
		try {
			numDice = std::stoi(userInput);
		}
		catch (std::invalid_argument) {
		}
		
		// Input handle
		if (userInput == "q") {
			repeat = 'q';
		}
		else if (userInput.find(d4) != std::string::npos) {
			for (int i = 0; i < numDice; i++) {
				result += rollDice(4);
			}
		}
		else if (userInput.find(d6) != std::string::npos) {
			for (int i = 0; i < numDice; i++) {
				result += rollDice(6);
			}
		}
		else if (userInput.find(d8) != std::string::npos) {
			for (int i = 0; i < numDice; i++) {
				result += rollDice(8);
			}
		}
		else if (userInput.find(d10) != std::string::npos) {
			for (int i = 0; i < numDice; i++) {
				result += rollDice(10);
			}
		}
		else if (userInput.find(d12) != std::string::npos) {
			for (int i = 0; i < numDice; i++) {
				result += rollDice(12);
			}
		}
		else if (userInput.find(d20) != std::string::npos) {
			for (int i = 0; i < numDice; i++) {
				result += rollDice(20);
			}
		}
		else {
			std::cout << "Invalid input." << std::endl;
		}
		std::cout << "Result: " << result << std::endl;
		result = 0;
	}
	
	return 0;
}