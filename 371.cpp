//Aburrimiento en las sobremesas: https://www.aceptaelreto.com/problem/statement.php?id=371&cat=102

#include <iostream>

using namespace std;

int calcularCerillas(int n);

int main() {
	int lado, cerillas;

	cin >> lado;

	while (lado != 0) {
		cerillas = calcularCerillas(lado);
		cout << cerillas << endl;

		cin >> lado;
	}

	return 0;

}

int calcularCerillas(int n) {
	int cerillas;

	if (n == 1) {
		cerillas = 3;
	} else { 
		cerillas = n*n * 3 - calcularCerillas(n - 1);
	}

	return cerillas;
}
