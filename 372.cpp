//La farsante de Mary Poppins: https://www.aceptaelreto.com/problem/statement.php?id=372&cat=102

#include <iostream>
#include <string>

using namespace std;

void voltear(string &);
int main() {
	int casos;
	string palabra;
	bool mayus;

	cin >> casos;

	for (int i = 0; i < casos; i++) {
		mayus = false;
		cin >> palabra;

		if (isupper(palabra[0])) {
			mayus = true;
		}

		voltear(palabra);


		if (mayus) {
			palabra[palabra.length() - 1] = tolower(palabra[palabra.length() - 1]);
			palabra[0] = toupper(palabra[0]);
		}

		cout << palabra << endl;
	}

	return 0;
}

void voltear(string& palabra) {
	char aux;
	int length = palabra.length() - 1;
	for (int i = 0; i <= length / 2; i++) {
		aux = palabra[i];
		palabra[i] = palabra[length - i];
		palabra[length - i] = aux;
	}
}