//prog of merge sort
#include<iostream>
using namespace std;
int data[100];
int ans[100];
void mergedata(int l,int h,int m)
{

    int x=l,y=m,k=l;
    while(x<=m&&y<=h)
    {
        if(data[x]<data[y])
        {
            ans[k]=data[x];
            k++;
            x++;
        }
        else
        {
            ans[k]=data[y];
            y++;
            k++;
        }
    }
    if(x>m)
    {
        for(int i=y;i<=h;i++)
        {
            ans[k]=data[i];
            k++;
        }
    }
    else
    {
        for(int i=x;i<=m;i++)
        {
            ans[k]=data[i];
        }
    }
    for(int i=0;i<h;i++)
        cout<<"ans"<<"\n\n"<<ans[i];
}



void mergesort(int low,int high)
{
     if( low<high)
    {
       int mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        mergedata(low,high,mid);
    }

}

int main()
{
        int cnt;
        cin>>cnt;
        for(int i=0;i<cnt;i++)
            cin>>data[i];

        mergesort(0,cnt-1);

return 0;
}
