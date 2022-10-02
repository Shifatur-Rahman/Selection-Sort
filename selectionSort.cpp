
#include <iostream>
using namespace std;
int main(){

int arr[5] = {9,13,15,4,2};
int i, j, min;

for(i=0; i<5; i++){
	for(j=i+1; j<5; j++){
		if(arr[i]>arr[j]){
            swap(arr[i], arr[j]);
		}
	}
}


for(i=0; i<5; i++){
	cout<<arr[i]<<" ";
}


}
