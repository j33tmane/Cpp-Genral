#include<iostream>
using namespace std;
int data[100];
int tmp[100];
void merges(int s,int e,int m)
{
    int i=0,j=s,k=m+1;
    while(j<=m&&k<=e)
    {
        if(data[j]<data[k])
            tmp[i++]=data[j++];
        else
            tmp[i++]=data[k++];
    }
    if(j>m)
    {
        for(int l=k;l<=e;l++)
        {
            tmp[i++]=data[l];
        }
    }
    else
    {
        for(int l=j;l<=m;l++)
        {
            tmp[i++]=data[l];
        }
    }
    for(int c=s,s=0;c<=e;c++)
        data[c]=tmp[s++];
}
void mergesort(int st,int en)
{
    int mid;
    if(st<en)
    {
        mid=(st+en)/2;
        mergesort(st,mid);
        mergesort(mid+1,en);
        merges(st,en,mid);
    }

}
int main()
{
    int cnt;
    cin>>cnt;
    for(int i=0;i<cnt;i++)
        cin>>data[i];
    mergesort(0,cnt-1);
    for(int k=0;k<cnt;k++)
        cout<<data[k]<<" ";
    return 0;
}
