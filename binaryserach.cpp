#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int input[100];
    int no,cnt;
    int st=0,last;
    int mid;
    int pos=0;

    cout<<"count:";
    cin>>cnt;

    cout<<"Enter numbers to store in array: "<<endl;
    for(int i=0; i<cnt; i++)
        cin>>input[i];
    cout<<"Enter the number you want to found :";
    cin>>no;
    cout<<endl;
    last=cnt-1;
    while(st<=last)
    {
        mid= (st+last)/2;

        if(input[mid]==no)
        {
            pos=mid;
            break;
        }
        if(no<input[mid])
            last=mid-1;
        if(no>input[mid])
            st=mid+1;
    }
    if(pos==0)
    cout<<" Required number not found "<<endl;
    else
    cout<<" Required number is found at index "<<pos<<endl;

return 0;

}
