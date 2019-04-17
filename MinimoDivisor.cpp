#include <iostream>

using namespace std;

int main(){	
	for(int i=1; i<100000000000;i++){
		int cont=0;
		for(int j=1; j<=20;j++){
			if(i%j==0)
				cont=cont+1;
		}
		if(cont==20){
			cout<<i;
			break;
		}		

	}
return 0;
}
