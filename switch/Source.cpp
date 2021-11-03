#include <iostream>
using namespace std;

int main() {
	
	string slovo;
	int hodnota;
	hodnota = 0;
	cout << "napis dane slovo" << endl;

	cin >> slovo;
	if (slovo == "jablko") {


		hodnota = 1;
	}
	else
		if (slovo == "mec") {


			hodnota = 2;
		}
		else
			if (slovo == "hudba") {
				hodnota = 3;
			}

	switch (hodnota) {
	case 1:
		cout << "som hladny" << endl;
		break;
	case 2:
		cout << "Do zbrane" << endl;
		break;
	case 3:
		cout << "Nananananaaaaa" << endl;
		break;
	default:
	cout << "Toto slovo nepoznam" << endl;

	}
	system("pause>0");



}