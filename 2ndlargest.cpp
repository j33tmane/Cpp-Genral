#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ans;
    int tt;
    cin>>tt;
    while(tt--){
        cin>>a>>b>>c;
        ans=(b>a)?(b>c)?(a>c)?a:c:b:(a>c)?(c>b)?c:b:a;
        cout<<ans<<endl;
    }
    return 0;
}
