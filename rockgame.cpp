#include <iostream>
#include <string>

int main() {
	std::cout << "Welcome to the rock game. Would you like to play? " << std::endl;
	std::string ans;
	std::cin >> ans;

	if (ans == "no" or ans == "n") {
		std::cout << "That's too bad you are playing anyways! \n";
	}
	else {
		std::cout << "Excellent! \n";
	}

	while(true){
		std::cout << "What would you like to do? \n";
		std::string ans2;
		std::cin >> ans2;

		std::cout << "You can't " << ans2 << " silly! You're a rock! \n";
	}
}
