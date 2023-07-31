#include<bits/stdc++.h>
#include<climits>
using namespace std;


bool checkSorted( int arr[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        if( arr[i] >= arr[i-1])
        {
            
        }
        else
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    while( t-- )
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        // Function Calling
        int ans = checkSorted(arr, n);
        if( ans == 1)
        {
            cout<<"Sorted"<<endl;
        }
        else
        {
            cout<<"NOT"<<endl;
        }
    }
}
