#include <iostream>

using namespace std;

int main(){
	long long N;
	cout<<"N?: ";
	cin>>N;
	
	long long mayor=0;
	for(long long j=2; j<=N;j++){
		if(N%j==0 and j%2!=0){
			int cont=0;
			for(long long k=2; k<=j;k++){
				if(j%k==0)
					cont=cont+1;	
			}
			if(cont==1){
				if(mayor<=j)
					mayor=j;
					cout<<mayor<<" ";	
			}
		}
	}

return 0;
}
