#include<bits/stdc++.h>
using namespace std;
int maxi(vector<int> &arr,int n)
{
    int maxiii=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ma<arr[i])
        {
            ma=arr[i];
        }
    }
    return maxiii;
}
int main()
{
    int n=5;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=maxi(arr,n);
    cout<< max;
}
