#include<iostream>

using namespace std;


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

void merge(int arr[], int const left, int const mid, int const right){
	int leftArrSize = mid - left + 1;
	int rightArrSize = right - mid;
	int leftArr[leftArrSize], rightArr[rightArrSize];
	for(int i = 0; i < leftArrSize; i++){
		leftArr[i] = arr[left + i];
	}
	for(int i = 0; i < rightArrSize; i++){
		rightArr[i] = arr[mid + 1 + i];
	}
	int indexLeft = 0, indexRight = 0, indexMerged = left;
	while(indexLeft < leftArrSize && indexRight < rightArrSize){
		if(leftArr[indexLeft] <= rightArr[indexRight]){
			arr[indexMerged] = leftArr[indexLeft];
			indexLeft++;
		}else{
			arr[indexMerged] = rightArr[indexRight];
			indexRight++;
		}
		indexMerged++;
	}
	while(indexLeft < leftArrSize){
		arr[indexMerged] = leftArr[indexLeft];
		indexLeft++;
		indexMerged++;
	}
	while(indexRight < rightArrSize){
		arr[indexMerged] = rightArr[indexRight];
		indexRight++;
		indexMerged++;
	}
}

void mergeSort(int arr[], int start, int end){
	if(start >= end)
	return;
	int mid = (start+end)/2;
	mergeSort(arr, start, mid);
	mergeSort(arr,mid+1, end);
	merge(arr, start, mid, end);
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
	mergeSort(arr, 0, n-1);
	cout<<"Array after merge sorting: \n";
	printArray(arr, n);
	return 0;
}
