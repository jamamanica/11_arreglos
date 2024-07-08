#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Cantidad de estudiantes: ";cin>>n;
	string FP[n],PG[n],A[n];
	cout<<"Estudiantes de FP:"<<endl;
    for(int i=0;i<n;i++){
    	cin>>FP[i];
	}
	cout<<"Estudiantes de PG:"<<endl;
    for(int i=0;i<n;i++){
    	cin>>PG[i];
	}
	int c=0;
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
			if(FP[i]==PG[j]){
				A[c]=FP[i];
    			c++;
    			break;
			} 
		}
	}
	cout<<"Los estudiantes en comun son: "<<c<<endl;
	for(int i=0;i<c;i++){
		cout<<A[i]<<endl;
	}
    return 0;
}
