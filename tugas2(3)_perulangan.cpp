#include <iostream>
using namespace std;
//Tugas 2-soal 3
int main(){
	int baris=5;
	for(int a=1;a<=baris;a++){
		int re=0;
		for(int b=1;b<=a;b++){
			int ci=b*2;
			re += ci;
			cout<<ci;
			
			if(b<a){
				cout<<"+";
			}else{
				cout<<"=";
			}
		}
		cout<<re<<endl;
	}
}
