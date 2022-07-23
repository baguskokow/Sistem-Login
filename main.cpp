#include <iostream>

using namespace std;

int main() {
	string username;
	string password;

	cout << "=========================\n";
	cout << "    [---- Login ----]\n";
	cout << "=========================";
	cout << endl << endl << endl;

	cout << "[--- Enter Username or Email ---]\n";
	cout << ">>> "; cin >> username;
	cout << endl;
	cout << "[--- Enter Your Password ---]\n";
	cout << ">>> "; cin >> password;
	cout << endl << endl;

	if (username == "kokow", password == "test_123") {
		cout << "=====> Login Success <=====" << endl;

	} else
		cout << "=====> Username or Password incorrect! <=====\n";
		cout << endl;

	return 0;
}

	