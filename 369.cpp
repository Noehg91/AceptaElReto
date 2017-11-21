//Contando en la arena: https://www.aceptaelreto.com/problem/statement.php?id=369&cat=102

#include <iostream>

using namespace std;

int main() {
	int num;

	cin >> num;

	while (num != 0) {
		for (int i = 0; i < num; i++) {
			cout << 1;
		}
		cout << endl;

		cin >> num;
	}

	return 0;

}
