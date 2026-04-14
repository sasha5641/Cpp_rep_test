#include <iostream>

using namespace std;

void main() {

	int num;
	int res = 0;

	do {
		cout << "Enter num ";
		cin >> num;
		res += num;
	} while (num != 0);

	cout << res;
}

