#include <iostream>
using namespace std;
//Tugas 2-soal 1
int main(){
	int a,b,c=0;
	for(a=1;a<=10;a++){
		b=a*2;
		c += b;
		cout<<b;
		
		if(a<10){
			cout<<"+";
		}else{
			cout<<"=";
		}
	}
	cout<<c;
}
