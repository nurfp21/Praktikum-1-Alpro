#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string nama;
	int liter, total, jenis;
	cout<<"Jenis bensin : "<<endl;
	cout<<"1. Pertalite"<<endl;
	cout<<"2. Pertamax"<<endl;
	cout<<"Pilih jenis bensin (1/2) = ";
	cin>>jenis;
	cout<<endl<<endl;
	
	if(jenis == 1)
	{
		total=7000*liter;
		ofstream struk;
		struk.open("Struck.txt", ios::out);
		struk<<"	PERTAMINA"<<endl<<endl;
		struk<<"jl. yogyakarta"<<endl;
		struk<<"============================"<<endl;
		struk<<"Total Liter		: "<<liter<<endl;
		struk<<"Jenis Bensin	: Pertalite"<<endl;
		struk<<"Nama Pelanggan	: "<<nama<<endl;
		struk<<"Total Harga		: Rp"<<total<<endl;
		struk<<"============================"<<endl;
		struk<<"Terima Kasih"<<endl;
		struk.close();
	}
	if(jenis == 2)
	{
		total=9000*liter;
		ofstream struk;
		struk.open("Struck.txt", ios::out);
		struk<<"	PERTAMINA"<<endl<<endl;
		struk<<"jl. yogyakarta"<<endl;
		struk<<"============================"<<endl;
		struk<<"Total liter		: "<<liter<<endl;
		struk<<"Jenis bensin	: Pertamax"<<endl;
		struk<<"Nama pelanggan	: "<<nama<<endl;
		struk<<"Total harga		: Rp"<<total<<endl;
		struk<<"============================"<<endl;
		struk<<"Terima Kasih"<<endl;
		struk.close();
	}
	
	return 0;
}
