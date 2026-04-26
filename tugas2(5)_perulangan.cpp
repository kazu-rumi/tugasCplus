#include <iostream>
using namespace std;
//Tugas 2-soal 5
int main(){
	int baris=1,total;
	for(int a=5;a>=baris;a--){
		int mi=0;
		for(int b=5;b>(5-a);b--){
			int ci=b*2;
			mi += ci;
			cout<<ci;
			
			if(b>(5-a)+1){
				cout<<"+";
			}else{
				cout<<"=";
			}
		}
		cout<<mi<<endl;
		total += mi;
	}
	cout<<"------+"<<endl;
	cout<<total;
}
