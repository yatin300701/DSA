#include<iostream>
using namespace std;
void allFactors(int n){
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(i==n/i){
				cout<<i<<" ";
			}
			
			else
			cout<<i<<" "<<n/i<<" ";
		}
	}
	
}
int main(){
	cout<<"Type n"<<endl;
	int n;
	cin>>n;
	allFactors(n);
}
