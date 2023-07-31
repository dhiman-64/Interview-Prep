/*

    Linear Search
        - T(n) = O(N)
        - S(n) = O(N)
      
*/

#include<iostream>
using namespace std;


int linearSearch(int arr[], int n, int key)
{
    for( int i=0 ; i<n ; i++)
    {
        if( arr[i] == key)
        {
            return i;
        }
    }
    return -1;
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
        int key;
        cin>>key;
        // Function Calling
        int ans = linearSearch(arr,n,key);
        cout<<"Found at index "<<ans<<endl;
    }
}
