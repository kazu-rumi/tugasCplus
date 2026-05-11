#include <iostream>//format dasar program c++
#include <iomanip>//format intuk mengatur output
#include <string>//format untuk tipe data String

using namespace std;

struct mahasiswa{//digunakan untuk menyimpan data
	string nama;
	float uts;
	float uas;
	float nilaiHitung;
	char nilaiHuruf;
};

float hitungNilai(float uts, float uas){//function perhitungan
	return (uas * 0.4) + (uts * 0.6);
}

char hitungHuruf(float nilai){//function menentukan nilai  huruf 
	if (nilai >= 80) return 'A';
	else if (nilai >= 70) return 'B';
	else if (nilai >= 56) return 'C';
	else if (nilai >= 47) return 'D';
	else return 'E';
}

int main(){
	int banyakData;
	
	cout<<"Ada berapa banyak Data: ";
	cin>>banyakData;//input data
	
	mahasiswa mhs[banyakData];
	
	for(int i=0;i<banyakData;i++){//input data
		cout<<"\nData Ke - "<<i + 1<<endl;
		cout<<"Nama : ";
		cin>>mhs[i].nama;
		cout<<"Nilai UTS : ";
		cin>>mhs[i].uts;
		cout<<"Nilai UAS : ";
		cin>>mhs[i].uas;
		
		//buat wadah untuk memanggil function
		mhs[i].nilaiHitung = hitungNilai(mhs[i].uts, mhs[i].uas);
		mhs[i].nilaiHuruf = hitungHuruf(mhs[i].nilaiHitung);
	}
	system("cls");
	
	//output 
	cout<<"\n---------------------------------------------------------------";
	cout<<"\nDaftar Nilai Mata Kuliah C++";
	cout<<"\n---------------------------------------------------------------\n";
	cout<< left << setw(4) << "No" 
         << setw(20) << "Nama Mahasiswa" 
         << setw(8) << "UTS" 
         << setw(8) << "UAS" 
         << setw(12) << "Nilai Akhir" 
         << "Nilai Huruf" << endl;
    cout << "---------------------------------------------------------------\n";
    
    for (int i = 0; i < banyakData; i++) {
        cout << left << setw(4) << i + 1 
             << setw(20) << mhs[i].nama 
             << setw(8) << mhs[i].uts 
             << setw(8) << mhs[i].uas 
             << setw(12) <<mhs[i].nilaiHitung 
             << "   " << mhs[i].nilaiHuruf << endl;
    }
    cout << "---------------------------------------------------------------\n";
}

