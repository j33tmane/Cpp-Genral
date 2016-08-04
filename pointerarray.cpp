#include<iostream>
using namespace std;
int main()
{
    char str[10];
    char *ptr;
    int opt;
    cin>>str;
    ptr=str;
    cout<<"1.copy string"<<endl<<"2.concate string"<<endl<<"3.no of chars"<<endl;
    cin>>opt;
    switch(opt)
    {
        case 1:copystr(ptr);
                break;
        case 2:concate(ptr);
                break;
        case 3:no_of_chars();

    }
    return 0;
}
