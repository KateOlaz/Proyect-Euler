#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int N;
	int cont;
	cout<<"N?: ";
	cin>>N;
	int n=0;
	for(int i=2;i<100000000;i++){
		cont=0;
		for(int j=2; j<=i;j++){
			if(i%j==0)
				cont=cont+1;
		}
		if(cont==1){
			n=n+1;
			if(N==n){
				cout<<i<<" ";
				break;
			}
		}
	}
return 0;
}
