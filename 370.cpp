//La 13-14: https://www.aceptaelreto.com/problem/statement.php?id=370&cat=102

#include <iostream>
#include <string>

using namespace std;

int main() {
	int casos, a, b;

	cin >> casos;

	for (int i = 0; i < casos; i++) {
		cin >> a;
		cin >> b;
		b = b * -1;

		if (((a - b == 1) && (b % 2 == 0)) || ((b - a == 1) && (a % 2 == 0))) {
			cout << "SI" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;

}
