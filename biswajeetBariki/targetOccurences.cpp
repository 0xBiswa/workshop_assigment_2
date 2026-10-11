#include <iostream>
using namespace std;

// THis function will return the count of occurances of target value in array
int findOccurances(int arr[], int& target, int size){
    int count=0;
    for(int j=0; j<size;j++)
        if(arr[j] == target)
            count++;
    return count;
}

int main(){
    int n,count,target;
    cout << "Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout << "Enter The Elements Of the Array:";

    // Take input from user, the array elements
    for(int i = 0; i<n;i++)
        cin >> arr[i];
    cout << "Enter your target value: ";
    cin >> target;
    count = findOccurances(arr,target,n); // call the findOccurances function
    if(count == 0){
        cout << "Target Doesn't Exist"<<endl;
    }else{
        cout << "Target Exists " << count << " times in the array." <<endl;
    }
    return 0;
}