/*
- Similar elements
- Globaly declared - arr[0];
- Addressed using index 
*/


#include<iostream>
#include<climits>
using namespace std;


int LargestEle( int arr[] , int n)
{
    int maxi = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
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
        int ans = LargestEle(arr, n);
        cout<<ans;
    }
}
