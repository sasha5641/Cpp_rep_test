// Користувач із клавіатури вводить числа. Порахувати їхню суму і вивести на екран, щойно користувач введе нуль.

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

