#include<iostream>
using namespace std;

void LinearSearch(int arr[], int len, int item){

    for(int i=0;i<len;i++){
        if(arr[i] == item){
            cout << endl;
            cout << item << " Found at index : " << i;
            return;
        }
    }
    cout << "Not found";
    
}

int main() {
    // int arr[] = {10, 5, 15, 21, -3, 7};
    int size = 5;
    int arr[size];
    cout << "Enter a array number: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    // calculating length of array
    int len = sizeof(arr)/sizeof(arr[0]);
    
    // item to be searched
    int item = 21;
    LinearSearch(arr, len, item);

    return 0;
}
// space complexity: O(N)
// time complexity : O(N)
