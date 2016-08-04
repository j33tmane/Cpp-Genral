#include<iostream>
using namespace std;

void sortstr(char word[])
{
    int i,j;
    char ch,ch1,ch2;
    for(i=0;word[i]!='\0';i++)
    {
            for(j=i+1;word[j]!='\0';j++)
            {
                ch1=word[i];
                ch2=word[j];
                if('ch1'>'ch2')
                {
                        ch=word[j];
                        word[j]=word[i];
                        word[i]=ch;
                }
            }
    }
    cout<<word<<endl<<ch<<endl;
}

int main()
{
    char str[10];
    cin>>str;
    sortstr(str);
    cout<<str<<endl;
    return 0;

}
