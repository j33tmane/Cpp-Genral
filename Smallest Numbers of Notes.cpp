#include<iostream>
using namespace std;
int main()
{
    int tc,no,cnt,i;
    int notes[]={100,50,10,5,2,1};
    cin>>tc;
    while(tc--)
    {
        cnt=0;
        i=0;
        cin>>no;
        while(no!=0)
        {
            cnt+=no/notes[i];
            no=no%notes[i];
            i++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
