#include<bits/stdc++.h>
using namespace std;


void moveZero(int arr[], int n)
{
    int j = -1;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if( j == -1 ) return;
    
    for(int i=j+1 ; i<n ; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i] , arr[j]);
            j++;
        }
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

/*
                BRUTE FORCE 

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


*/
