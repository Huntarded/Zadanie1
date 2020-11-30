#include <iostream>

using namespace std;

int main() {

	int wysokosc;
	int szerokosc;



	cout << "Podaj wysokosc: ";
	cin >> wysokosc;
	cout << "Podaj dlugosc: ";
	cin >> szerokosc;


	for (size_t i = 0; i < wysokosc; i++)

	{
		for (size_t j = 0; j < szerokosc; j++)
		{
			if (i % (wysokosc - 1) == 0 | j % (szerokosc - 1) == 0)
				cout << 'X';
			else
				cout << ' ';
		}
		cout << endl;
	}
}