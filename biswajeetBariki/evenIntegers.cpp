#include <iostream>
using namespace std;

int main(){
    int n,count=0;
    cout << "Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout << "Enter The Elements Of the Array:";
    for(int i = 0; i<n;i++)
        cin >> arr[i];
    
    for(int j=0; j<n;j++)
        if(arr[j] % 2 == 0)
            count++;
    cout << "There are " << count << " even numbers in the array" <<endl;
    return 0;
}