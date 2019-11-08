#include<iostream>
using namespace std;
int main(){
	int a,b,c,x,i;
	cin>>b>>a;
	int matriz[b][a];
	for(x=0;x<b;x++){
		for(i=0;i<a;i++){
			cin>>matriz[x][i];
			
		}
		
	}for(x=0;x<b;x++){
		for(i=a-1;i>0;i--){
			cout<<matriz[x][i]<<' ';
		}
		cout<<matriz[x][0]<<'\n';
	}
}
