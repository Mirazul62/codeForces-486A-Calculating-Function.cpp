#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum=0;
    cin>>n;
    if(n & 1)
        sum=(n-1)/2-n;
    else
        sum=n/2;
    cout<<sum<<endl;
}
