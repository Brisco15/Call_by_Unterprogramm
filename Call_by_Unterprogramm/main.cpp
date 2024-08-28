#include<iostream>
using namespace std;

void tauschen_value(int x, int y);
void tauschen_pointer(int* x, int* y);
void tauschen_reference(int& x, int& y);

int main()
{
	/*Aufgabe
	* Gegeben seien zwei Variablen a und b.
	* Diesen beiden Variablen wird jeweils ein Wert zugewiesen
	* Der wert in den beiden Variablen soll untereinander getauscht werden
	* Das Tauschen soll in einem Unterprogramm erfolgen!
	* Nach dem Aufrufen des Unterprogrammes soll mit den getauschten Werten
	* weiter gearbeitet werden
	* Beispiel:
	* vor dem Tauschen: a= 4 und b = 9
	* Tauschen durch Unterprogramm
	* nach dem Tauchen: a = 9 und b = 4
	*/


	int a = 4, b = 9;

	cout << "a = " << a << "\tb = " << b << "\n\n";

	//Tauschen
	cout << "Call by Value\n\n";

	//An das Unterprogramm werden Werte Übergeben
	tauschen_value(a, b);

	cout << "a = " << a << "\tb = " << b << "\n\n";
//////////////////////////////////////////////////////////////////
	cout << "a = " << a << "\tb = " << b << "\n\n";
	//Tauschen
	cout << "Call by Pointer\n\n";

	//An das Unterprogramm werden Adressen übergeben
	tauschen_pointer(&a, &b);

	cout << "a = " << a << "\tb = " << b << "\n\n";
////////////////////////////////////////////////////////////////
	///Ursprungswerte
	a = 4; b = 9;
	cout << "a = " << a << "\tb = " << b << "\n\n";

	//Tauschen

	cout << "Call by Referenz\n\n";
	//An das Unterprogramm werden Variable übergeben
	tauschen_reference(a, b);

	cout << "a = " << a << "\tb = " << b << "\n\n";

	return 0;
}

void tauschen_value(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void tauschen_pointer(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void tauschen_reference(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
