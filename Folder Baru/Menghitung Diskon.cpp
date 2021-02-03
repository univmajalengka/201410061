#include<iostream>
using namespace std;
int main()
{
	std::cout<<"Jumlah Belanja : ";
	switch(discount){
		case 0 ... 24.000 : std::cout<<"0 Diskon"; break;
		case 25.000 ... 49.000 : std::cout<<"10 Diskon"; break;
		case 50.000 ... 99.000 : std::cout<<"12,5 Diskon"; break;
		default: std::cout<<"Jumlah Yang Di Bayar"; break;
	}
	return 0;
}
