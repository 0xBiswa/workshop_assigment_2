#include <iostream>
using namespace std;

int main(){
    int n,s=0;
    cout << "Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout << "Enter The Elements Of the Array:";
    // Take input from user the array elements
    for(int i = 0; i<n;i++)
        cin >> arr[i];
    
    // Find the sum of elements
    for(int j=0; j<n;j++)
        s += arr[j];
    cout << "The sum of all the elements is " << s << endl;
    return 0;
}