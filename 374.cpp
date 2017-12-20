//Criogenización: https://www.aceptaelreto.com/problem/statement.php?id=374

#include <iostream>
#include <string>

using namespace std;

int main() {
	int casos;
	cin >> casos;

	for (int i = 0; i < casos; i++) {
		long long num, max = -1, min = -1;
		int nMax = 0, nMin = 0;

		cin >> num;

		while (num != 0) {
			if (max < 0 || min < 0) {
				max = num;
				min = num;
				nMax = 1;
				nMin = 1;
			}
			else {
				if (num == max) {
					nMax++;
				}
				else if (num > max) {
					max = num;
					nMax = 1;
				}
				if (num == min) {
					nMin++;
				}
				else if (num < min) {
					min = num;
					nMin = 1;
				}
			}

			cin >> num;
		}
		if (min != -1 && max != -1)
			cout << min << " " << nMin << " " << max << " " << nMax << endl;
	}

	return 0;
}