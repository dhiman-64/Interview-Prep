/*
- Largest 
- Second Largest
- Check Sorted
- Remove duplicates
*/

#include<iostream>
using namespace std;


void leftRotate( int arr[], int n)
{
    int temp = arr[0];
    for(int i=1 ; i<n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        //Function Calling
        leftRotate(arr,n);
        for(int i=0 ; i<n ; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
