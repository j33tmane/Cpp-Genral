#include<bits/stdc++.h>
using namespace std;
typedef long long int uli;
int main(){
   int t,n;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      int v=sqrt(n);
      int ans=v+v-1;
      int rem=n-v*v;
      ans+=rem/v;
      rem%=v;
      if(rem>0)ans++;
      printf("%d\n",ans);
   }
   return 0;
}
