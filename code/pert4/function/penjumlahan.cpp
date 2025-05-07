#include <iostream>
using namespace std;


int main () {
	int bilangan_pertama, bilangan_kedua, kurang;
	cout << "masukan dua bilangan: ";
	cin >> bilangan_pertama >> bilangan_kedua;
	
	kurang = bilangan_pertama - bilangan_kedua;
	
	cout << bilangan_pertama << "-" <<
	bilangan_kedua << " = " << kurang;
	
	return 0;
}