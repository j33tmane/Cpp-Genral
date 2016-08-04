#include<iostream>
#include<string.h>
using namespace std;

int is_palindrome(char abs[])
{
    char tmp[20];
    strcpy(tmp,abs);
    strrev(abs);
    if(strcmp(abs,tmp))
        return 0;
    else
        return 1;
}

int main(){
    char str[20];
    int ans;
    cin>>str;
    ans=is_palindrome(str);
    if(ans==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
