#include<iostream>
using namespace std;

void multiplo(int a[],int b,int c){
	for(int i=0;i<b;i++){
		a[i]=(i+1)*c;
	}
}

int main(){
    int n,m;
    cout<<"Cantidad numeros: ";cin>>n;
    cout<<"Multiplo: ";cin>>m;
    int A[n];
    multiplo(A,n,m);
    cout<<"Lista de multiplos de "<<m<<":"<<endl;
    for(int i=0;i<n;i++){
    	cout<<A[i]<<" ";
	}
    return 0;
}

