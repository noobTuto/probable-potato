#include <iostream>

using namespace std;

class Nariz
{
    public:
        int numero;
        int id;

        Nariz(int numeroe, int ide)
        {
            numero = numeroe;
            id = ide;

        }

        void Show()
        {
            cout << "este " << numero << " es mi numero y este " << id << " es mi id" << endl;
        }
};

int main()
{
	Nariz x = Nariz(69,420);
	x.Show();
	return 0;
}
