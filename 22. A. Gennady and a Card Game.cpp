#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    int i,j,k;
    int n,m;
bool ans=false;
    string s, x;
    cin>>s;

    for(i=0;i<5;i++)
    {
        cin>>x;
        if(x[0]==s[0] || x[1]==s[1])
        {

            ans=true;
break;
        }
    }

    if(ans) cout<<"YES\n";

    else cout<<"NO\n";

    return 0;
}
