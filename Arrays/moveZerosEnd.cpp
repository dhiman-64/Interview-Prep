#include<bits/stdc++.h>
using namespace std;


void moveZero(int arr[], int n)
{
    vector<int> temp;
    for(int i=0 ; i<n ; i++)
    {
        if( arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    for(int i=0 ; i<temp.size() ; i++)
    {
        arr[i] = temp[i];
        continue;
    }
    
    for(int i=temp.size() ; i<n ; i++)
    {
        arr[i] = 0;
    }
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
        // Function Calling
        moveZero(arr,n);
        for(int i=0 ; i<n ; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
