#include <iostream>

using namespace std;

const int rozmiar_tablicy = 500;
int tablica[rozmiar_tablicy];
int liczba_wczytanych_liczb = 0;

int ipow(int a, int n) {
	int wynik = 1;
	for (int i = 0; i < n; i++){
		wynik = wynik * a;
	}
	return wynik;
}

bool sprawdz(int liczba) {

	for (int n = 0; n <= 10; n++) {
		int sprawdzana_potega = ipow(3, n);
		if (sprawdzana_potega == liczba)
			return true;
	}
	return false;
}


int main() {
	int liczba_szukanych_liczb = 0;
	//cout << sizeof(short int) << endl;
	while (!cin.eof() && liczba_wczytanych_liczb < rozmiar_tablicy) {
		cin >> tablica[liczba_wczytanych_liczb];
		liczba_wczytanych_liczb = liczba_wczytanych_liczb + 1;
	}
	for (int i = 0; i < liczba_wczytanych_liczb; i++) {
		int liczba = tablica[i];
		bool czy_szukana = sprawdz(liczba);

		if (czy_szukana) {
			liczba_szukanych_liczb++;
		}
	}
	cout << liczba_szukanych_liczb << endl;
	return 0;
}