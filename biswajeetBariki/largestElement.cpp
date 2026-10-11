#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout << "Enter The Elements Of the Array:";
    for(int i = 0; i<n;i++)
        cin >> arr[i];
    m = arr[0];
    for(int j=0; j<n;j++)
        if(arr[j] > m)
            m=arr[j];
    cout << "The biggest element in the array is : " << m << endl;
    return 0;
}