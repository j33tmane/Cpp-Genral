#include<iostream>
using namespace std;
int main()
{
    int no,arrays[100];

    cin>>no;
    for(int i=0;i<no;i++)
        cin>>arrays[i];
    for(int i=0;i<no;i++)
    {
        for(int k=1;k<no;k++)
        {
                for(int c=i;c<k;c++)
                {
                    if(arrays[c]<=arrays[c+1])

                }
        }
    }

    return 0;
}
