#include <iostream>
using namespace std;

int evenNumbers(int arr[],int n){
    int count =0;
        for(int j=0; j<n;j++)
            if(arr[j] % 2 == 0)
                count++;
    return count;
}
int main(){
    int n, count;
    cout << "Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout << "Enter The Elements Of the Array:";
    for(int i = 0; i<n;i++)
        cin >> arr[i];
    count = evenNumbers(arr,n);

    cout << "There are " << count << " even numbers in the array" << endl;
    return 0;
}