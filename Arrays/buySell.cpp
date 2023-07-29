#include<iostream>
#include<climits>
using namespace std;


int buySell( int arr[] , int n )
{
    int profit = 0;
    int minPrice = INT_MAX;
    for(int i=0 ; i<n ; i++ )
    {
        minPrice = min( minPrice, arr[i]);
        profit = max( profit, arr[i]-minPrice );
    }
    return profit;
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
        for( int i=0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        int ans = buySell( arr, n );
        cout<<ans<<endl;
    }
}
