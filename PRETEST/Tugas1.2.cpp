#include <iostream>
 
using namespace std;
 
int main()
{
	float ag = 17000,ab = 21000;
	float total;
	cout<<"Harga Ayam Goreng ="<<ag<<endl;
	cout<<"Harga Ayam Bakar  ="<<ab<<endl;
	total=ag+ab;
	cout<<"Jumlah Pembelian  ="<<total<<endl;
 
  int total_belanja, harga_akhir;
 
  cout << "Total Belanja: Rp.";
  cin >> total_belanja;
  cout << endl;
 
  if ((total_belanja >= 45000) && (total_belanja < 1000000)) {
    harga_akhir = total_belanja - (0.1*total_belanja);
    cout << "Selamat, anda mendapat diskon 10%" << endl;
  } 
  else {
    harga_akhir = total_belanja;
  }
 
  cout << "Total bayar: Rp." << harga_akhir << endl;
 
  return 0;
}
