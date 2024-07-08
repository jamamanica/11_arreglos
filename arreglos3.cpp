#include<iostream>
using namespace std;

int main(){
    string A[7]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
    float tmin[7],tmax[7],tmed[7],min=100,max=0;
	string diamin="",diamax="";
	for(int i=0;i<7;i++){
    	cout<<"Temperatura minima de "<<A[i]<<": "; cin>>tmin[i];
    	cout<<"Temperatura maxima de "<<A[i]<<": "; cin>>tmax[i];
    	tmed[i]=(tmin[i]+tmax[i])/2;
    	if(tmin[i]<min){
    		min=tmin[i];
    		diamin=A[i];
		}
		if(tmax[i]>max){
			max=tmax[i];
			diamax=A[i];
		}
	}
	cout<<"---------------------------------------"<<endl;
	cout<<"Temperatura media de cada dia: "<<endl;
	for(int i=0;i<7;i++){
		cout<<A[i]<<": "<<tmed[i]<<" grados"<<endl;
	}
	cout<<"---------------------------------------"<<endl;
	cout<<"El dia con menor temperatura: "<<diamin<<" ("<<min<<" grados)"<<endl;
	int n;
	bool encontrado=false;
	cout<<"Ingrese una temperatura maxima: ";cin>>n;
	for(int i=0;i<7;i++){
		if(tmax[i]==n){
			cout<<"Coincidencia en: "<<A[i]<<endl;
			encontrado=true;
		}
	}
	if(!encontrado){
		cout<<"Sin coincidencias"<<endl;
	}
	
    return 0;
}
