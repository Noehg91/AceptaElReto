//Cubos visibles: https://www.aceptaelreto.com/problem/statement.php?id=373

#include <iostream>
#include <string>
#include "math.h"

using namespace std;

unsigned long long calcularCubos(int N);

int main() {
	int casos;
	cin >> casos;

	for (int i = 0; i < casos; i++) {
		int N;
		unsigned long long cubos;

		cin >> N;

		cubos = calcularCubos(N);

		cout << cubos << endl;
	}

	return 0;
}

unsigned long long calcularCubos(int N) {
	unsigned long long cubos;

	#pragma warning(suppress: 4244)
	unsigned long long S = pow(N - 2, 2) * 6;
	unsigned long long V = 4;
	unsigned long long AC = (N - 1) * 4;
	unsigned long long AI = (N - 2) * 8;

	cubos = S + V + AC + AI;

	return cubos;
}