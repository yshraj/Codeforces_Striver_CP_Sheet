#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    int i=1,j=1,k=0;
    int n,s=0;

    cin>>n;

    while(s<n)
    {
        j++ ;
                i=(j*(j+1))/2;

        s = s + i;

k++;
    }
    cout<<k<<endl;
}
