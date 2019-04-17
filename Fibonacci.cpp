#include <iostream>
using namespace std;

// FIBONACCI

int main(){
	int i = 0;
	int j = 1;
	int sum = 0;
	while(j<=4000000){	
		int t;
		t = i + j;
		i = j;
		j = t;
		
		if(j%2==0){
			sum=sum+j;
		}
	}
	cout<<sum;
	return 0;
}


