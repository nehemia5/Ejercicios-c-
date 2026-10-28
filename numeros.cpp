/* realize un programa que permita separar en cifras numeros en un rango entre 10-999999, 
ademas el programa debe de ser capaz de identificar si el numero identificado es par, impar, primo o perfecto*/

#include<iostream>
using namespace std;
int main(){
	int u=0;
	int d=0;
	int c=0;
	int um=0;
	int dm=0;
	int cm=0;
	int n=0;
	
	cout<<"ingrese el numero(10-999999) porfavor"<<endl;
	cin>>n;
	
	u=n%10;
	d=(n/10)%10;
	c=(n/100)%10;
	um=(n/1000)%10;
	dm=(n/10000)%10;
	cm=(n/100000)%10;
	cout<<"unidad: "<<u<<endl;
	cout<<"decena: "<<d<<endl;
	cout<<"centena: "<<c<<endl;
	cout<<"unidad de mil: "<<um<<endl;
	cout<<"decena de mil: "<<dm<<endl;
	cout<<"centena de mil: "<<cm<<endl;
	
	if(n/2==0){
		cout<<"su numero: "<<n<<" es par"<<endl;
	}
	else{
		cout<<"su numero: "<<n<<" es impar"<<endl;
	}
	
	for(int i=1; i<=n; i++){
		if(n/i==o){
			cout<<"su numero: "<<n<<" es primo"<<endl;
		}
		if
	}
	
	
	return 0;
	
}
