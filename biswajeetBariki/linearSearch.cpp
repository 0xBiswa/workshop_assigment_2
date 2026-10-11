#include <iostream>
using namespace std;

int findTarget(int arr[], int& target, int size){
    for(int j=0; j<size;j++)
        if(arr[j] == target)
            return j;
    return -1;
}

int main(){
    int n,index,target;
    cout << "Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout << "Enter The Elements Of the Array:";
    for(int i = 0; i<n;i++)
        cin >> arr[i];
    cout << "Enter your target value: ";
    cin >> target;
    index = findTarget(arr,target,n);
    if(index == -1){
        cout << "Target Doesn't Exist";
    }else{
        cout << "Target Exists At Index: " << index <<endl;
    }
    return 0;
}