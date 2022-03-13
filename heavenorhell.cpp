#include <iostream>
using namespace std;

int main() {
	int num;
	int test = 1;
	cin >> num;

	while (test <= num) {
		string birthday;
		int N = 0, S = 0, G = 0, year = 0;
		int sBirthday[9];
		char currentChar;
		
		cin >> birthday;
		for (int i = 0; i < 9; i++) {
			currentChar = birthday.at(i);
			sBirthday[i] = (int)currentChar - '0';
		}
		for (int i = 0; i < 8; i++)
			N += sBirthday[i];
		for (int i = 1; i <= N; i++)
			if (N % i == 0 && i != N)
				S += i;
		G = S + sBirthday[8];

		if (N > G)
			cout << "-1" << endl;
		else if (N == G)
			cout << "0" << endl;
		else if (N < G) {
			year = G - N;
			cout << year << endl;
		}
		test++;
	}
	return 0;
}