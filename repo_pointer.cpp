﻿// pointer ukazateli
#include <iostream>
using namespace std;

int main() {
	int n = 5;
	cout << n << endl;         //vivod  peremennoy n
	cout << &n << endl;       // adress peremennoy n
	int* ptr = &n;           //int* sozdan ukazantel / prt -> imya / na adres peremennoy n (&n)
	cout << ptr << endl;    //vivod adressa  ukazanelya
	cout << *ptr << endl;  //dostup k znacheniyu ptr chrez razimenovanie *ptr
	*ptr = 10;            //izmenenie znacheniya na adrese *ptr
	cout << *ptr << endl;
	cout << n << endl;   //vivod peremennoy n s drugim znacheniem


	int* ptr2;
	*ptr2 = 2;
	system("pause>0");
	return 0;
}