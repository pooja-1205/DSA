#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j - 1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout<<"After Using Insertion Sort: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Using Instertion sort : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;

    insertionSort(arr,n);
    return 0;
}

