#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Cantidad de numeros: ";cin>>n;
    int A[n],Par[n]={0},Impar[n]={0};
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]%2==0){	
            Par[i]=A[i];
        } else{
            Impar[i]=A[i];
        }
    }
    cout<<"Par: ";
    for(int i=0;i<n;i++){
        if(Par[i]!=0){
			cout<<Par[i]<<" ";
    	}
	}
    cout<<"\nImpar: ";
    for(int i=0;i<n;i++){
    	if(Impar[i]!=0){	
			cout<<Impar[i]<<" ";
    	}
	}
    return 0;
}