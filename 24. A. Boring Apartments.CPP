
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{

    int i,j;
    int n,m;

    cin>>n;
    string k = to_string(n);
j=k.size();

    m = ((n%10)-1)*10 + (j*(j+1)/2);
  cout<<m<<endl;
}
}
