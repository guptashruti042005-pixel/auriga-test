#include<bits/stdc++.h>
using namespace std;
int maxi(vector<int> &arr,int n)
{
    int ma=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ma<arr[i])
        {
            ma=arr[i];
        }
    }
    return ma;
}
int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=maxi(arr,n);
    cout<< max;
}