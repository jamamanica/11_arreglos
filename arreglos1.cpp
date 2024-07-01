#include<iostream>
using namespace std;

int main(){
	float s=0, c=0, n , p;
	cout<<"Ingrese la cantidad de datos: "; cin>>n;
	int A[30];
	for(int i=0; i<n; i++){
		cin>>A[i];
		s = s + A[i];
		if(A[i] == 0){
			c++;
		}
	}
	p = (c/n)*100;
	cout<<"La sumatoria es : "<<s<<endl;
	cout<<"Porcentaje de valor cero: "<<p<<"%"<<endl;
	return 0;
}