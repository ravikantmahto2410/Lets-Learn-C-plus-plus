#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int>arr = {13, 46,24, 52, 20, 9};
	for(int i=0; i < arr.size(); i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i = 0; i < arr.size()-1; i++){
	    int minElem = INT_MAX;
	    int minIdx = -1;
	    
	    for(int j = i; j < arr.size(); j++){
	        if(arr[j] < minElem){
	            minElem = arr[j];
	            minIdx = j;
	        }
	    }
	    swap(arr[i],arr[minIdx]);
	}
	for(int i=0; i < arr.size(); i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
}
