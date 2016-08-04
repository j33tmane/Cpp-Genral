#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[100],t[100];
   // int no[100],fav[100],cnt,cnt1;
    int cnt,tc;
   cin>>tc;
   while(tc--)
   {

            cin>>cnt;
            for(int i=0;i<cnt;i++)
            {
                cin>>s[i];
            }
            cin>>cnt;
            for(int k=0;k<cnt;k++)
            {
                cin>>t[k];
            }
             std::size_t found = s.find(t);
             if (found!=std::string::npos)
                cout<<"YES"<<endl;
             else
                cout<<"no"<<endl;
   }
    return 0;
}
