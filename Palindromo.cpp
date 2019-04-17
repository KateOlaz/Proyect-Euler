#include <iostream>
using namespace std;

int opposite(int n){
	int m=0;
	while(n>0){
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return m;
}

int main(){
  	int mayor=0;
	for(int i=100;i<=999;i++){
		int m;
		for (int j=100;j<=999;j++){
			m=i*j;
			if (m==opposite(m) and m > mayor)
				mayor = m;
		}
	}
	cout << mayor;
	return 0;
}


