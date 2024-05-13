

#include <iostream>
using namespace std;

class mahasiswa
{
private:
	long long static int nim;
public:
	long long int id;
	string nama;

	void setId();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static long long int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setId();
	}

};

long long int mahasiswa::nim = 20230140112;

void mahasiswa::setId()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID =" << id << endl;
	cout << "Nama =" << nama << endl;
	cout << endl;
}


int main()
{
	mahasiswa mhs1("Khonsadiya");
	mahasiswa mhs2("Nasywa");
	mahasiswa::setNim; long long(20230140121);
	mahasiswa mhs3("Salsabila");
	mahasiswa mhs4("Khonsa");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
	return 0;
}

