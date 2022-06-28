#include<iostream>

using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[], int n){
	cout<<"[";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<",";
	}
	if(n){
		cout<<"\b";
	}
	cout<<"]\n";
}

void selectionSort(int arr[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array: \n";
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<"Array before sorting: \n";
	printArray(arr, n);
	selectionSort(arr, n);
	cout<<"Array after selection sorting: \n";
	printArray(arr, n);
	return 0;
}
