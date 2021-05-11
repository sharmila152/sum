#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=1;i<ni++)
        {
            cin>>arr[i];
        }
        int prefix[n];
        prefix[1]=arr[1];
        for(i=2;i<n;i++)
        {
            prefix[i]=prefix[i-1]+arr[i];
        }
        int Q;
        cin>>Q;
        while(Q--)
        {
            int L,R;
            cin>>L>>R;
            cout<<prefix[R]-prefix[L-1];
        }
    }
}
