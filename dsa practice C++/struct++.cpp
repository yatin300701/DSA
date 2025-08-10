#include <bits/stdc++.h>
using namespace std;
struct myHash{
	int a=120;
	int b=0;
		int arr[2];
	myHash(){
	
			for(int i=0;i<2;i++){
		arr[i]=i;
	}
	}

	int tob(int key){
		return arr[key];
	}
};
int main(){
	myHash ab;
	cout<<ab.a<<endl;
	cout<<ab.tob(1);
}
