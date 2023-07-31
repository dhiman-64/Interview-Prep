/*
- Similar elements
- Globaly declared - arr[0];
- Addressed using index 
*/


#include<bits/stdc++.h>
#include<climits>
using namespace std;


int secLargest( int arr[] , int n )
{
    int largest = arr[0];
    int slargest = -1;
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if( arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
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
        int ans = secLargest(arr, n);
        cout<<ans;
    }
}

/*
             BRUTE FORCE

#include<bits/stdc++.h>
#include<climits>
using namespace std;


int secLargest( int arr[], int n)
{
    sort( arr, arr+n);
    int Smaxi = INT_MIN; 
    int maxi = arr[n-1];
    for(int i=n-2 ; i>=0 ; i--)
    {
        if(arr[i] != maxi)
        {
            Smaxi = arr[i];
            break;
        }
    }
    return Smaxi;
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
        int ans = secLargest(arr, n);
        cout<<ans;
    }
}
*/
