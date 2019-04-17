#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int cont;
	long  sum=0;
	for(int i=2;i<1000000000;i++){
		cont=0;
		for(int j=2; j<=i;j++){
			if(i%j==0)
				cont=cont+1;
		}
		if(cont==1){
			if(i>2000000){
				break;
			}
			sum=sum+i;		
		}
	
	}
	cout<<sum;
	return 0;
}
