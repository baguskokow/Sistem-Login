#include <iostream>

int main() {
	std::string username;
	std::string password;

	std::cout << "=========================\n";
	std::cout << "    [---- Login ----]\n";
	std::cout << "=========================";
	std::cout << "\n\n\n";

	std::cout << "[--- Enter Username or Email ---]\n";
	std::cout << ">>> "; std::cin >> username;
	std::cout << "\n";
	std::cout << "[--- Enter Your Password ---]\n";
	std::cout << ">>> "; std::cin >> password;
	std::cout << "\n\n";

	if (username == "baguskoko" && password == "yahahaha") {
		std::cout << "=====> Login Success <=====\n";

	} else {
		std::cout << "=====> Username or Password incorrect! <=====\n";
	}

	return 0;
}

	
