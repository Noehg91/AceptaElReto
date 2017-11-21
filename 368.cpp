//Cociendo huevos: https://www.aceptaelreto.com/problem/statement.php?id=368&cat=102

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float huevos, capacidad, tiempo = 0;

	cin >> huevos;
	cin >> capacidad;

	while (!(huevos == 0 && capacidad == 0)) {
		tiempo = ceil(huevos / capacidad) * 10;

		cout << tiempo << endl;

		cin >> huevos;
		cin >> capacidad;
	}

	return 0;

}
