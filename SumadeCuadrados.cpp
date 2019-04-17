#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int sum=0;
	int resultado;
	
	for(int i=1;i<=100;i++){
		resultado=pow(i,2);
		sum=sum+resultado;
	}
	cout<<"Suma de Cuadrados: "<<sum<<endl;

	int suma=0;
	int resultados;
	for(int i=1;i<=100;i++){
		suma=suma+i;
		resultados=pow(suma,2);
	}
	cout<<"Suma al Cuadrado: "<< resultados<< endl;

	int resto;
	resto=resultados-sum;
	cout<<"Diferencia: "<<resto;
return 0;
}
