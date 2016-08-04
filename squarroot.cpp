#include<iostream>
#include<math.h>       /* sqrt */
using namespace std;
int main ()
{
  int tc,no;
  cin>>tc;
  while(tc--)
  {
        cin>>no;
        int x=sqrt(no);
        cout<<x<<endl;
  }
  return 0;
}
