#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,k,l,pos=0,st=0;;
    int len,row_lim,clm_lim;
    char str[26];
    cin>>str;
    len=strlen(str);
    row_lim=(len*2)-1;
    clm_lim=len-1;
    for(i=0;i<row_lim;i++)
    {
        st=0;
        for(j=0;j<=clm_lim;j++)
        {
            if(((i+j>=clm_lim)||(i-j>=clm_lim))&&(i-j<len))
            {
                cout<<str[st];
                st++;
            }
            else
                cout<<" ";
        }
        st=0;
        for(k=0;k<=clm_lim;k++)
        {
            if(k<=i&&i+k<row_lim)
            {
                cout<<str[st];
                st++;
            }
        }
        cout<<endl;
    }
    return 0;
}
