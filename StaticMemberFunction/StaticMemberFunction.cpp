

#include <iostream>
using namespace std;

class mahasiswa
{
private:
	static int nim;
public:
	int id;
	string nama;

	void setId();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setId();
	}

};

int mahasiswa::nim = 20230140112;

void mahasiswa::setId()
{
	id = ++nim;
}


