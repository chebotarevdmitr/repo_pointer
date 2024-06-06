// pointer ukazateli
#include <iostream>
using namespace std;

int main() {
	int n = 5;
	cout << n << endl;//vivod  peremennoy n
	cout << &n << endl;// adress peremennoy n
	int* ptr = &n; //int* sozdan ukazantel / prt -> imya / na adres peremennoy n (&n)
	cout << ptr << endl;//vivod adressa  ukazanelya
	system("pause>0");
	return 0;
}