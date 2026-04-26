#include <iostream>
using namespace std;
//Tugas 2-soal 4
int main(){
	int baris=5;
	for(int a=1;a<=baris;a++){
		long long re=1;
		for(int b=1;b<=a;b++){
			int ci=(b*2)-1;
			re *= ci;
			cout<<ci;
			
			if(b<a){
				cout<<"*";
			}else{
				cout<<"=";
			}
		}
		cout<<re<<endl;
	}
}
