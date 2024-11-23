#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int n, int target ){
    // int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid]<target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[9] = {1, 2, 3, 5, 14,20, 25, 26, 50};
    int target = 20;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int index = binarySearch(arr,n, target);
    if(index == -1){
        cout<<"Element is not found ";
    }else{
        cout<<"Element is found at Index : "<<index<<endl;
    }  
}

//Time Complexity: O(n log n) (due to sorting).
//without sort TC : O(log n)
//Space Complexity: O(1) (in-place computation)