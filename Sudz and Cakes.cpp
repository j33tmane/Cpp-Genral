#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    int tc;
    unsigned int color[3];
    cin>>tc;
    while(tc--)
    {
        scanf("%d %d %d",&color[0],&color[1],&color[2]);
        qsort (color,3, sizeof(unsigned int), compare);
        cout<<(color[0]+(color[1]-color[0]))<<endl;
    }
    return 0;
}
