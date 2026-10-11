#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout << "Enter The Elements Of the Array:";
    // Take input from user the array elements

    for(int i = 0; i<n;i++)
        cin >> arr[i];
    m = arr[0];

    // Assume that first element is the biggest one then contrast the hypothesis if possible using for loop
    for(int j=0; j<n;j++)
        if(arr[j] > m)
            m=arr[j];
    cout << "The biggest element in the array is : " << m << endl;
    return 0;
}