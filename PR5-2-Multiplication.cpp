#include<iostream>
using namespace std;
int main(){
	
	int n,m;
	cout<<"enter n: ";
	cin>>n;
	cout<<"enter m: ";
	cin>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==j){
				cout<<i*j<<"*"<<"\t";
			}
			else
			cout<<i*j<<"\t";
		}
		cout<<endl;
	}
	system("pause>n");
	return 0;
}
