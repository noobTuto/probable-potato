#include <iostream>

using namespace std;

class Nariz()
{
	int numero;
	int id;
	
	void Nariz(int numero, int id)
	{
		this.numero = numero;
		this.id = id; 

	}

	void Show()
	{
		cout << "este " << this.numero << " es mi numero y este " << this.id << " es mi id" << endl;
	}
}

int main()
{
	Nariz x = Nariz(69,420);
	x.Show();
	return 0;
}