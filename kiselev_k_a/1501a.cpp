#include <algorithm>
#include <cmath>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <vector>


typedef long long ll;
typedef long double ld;

int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);

  int t=0;
  std::cin>>t;

  while(t>0){
    int n=0;
    std::cin>>n;

    std::vector<int>a(n+1,0);
    std::vector<int>b(n+1,0);

    for (int i=1;i<=n;i+=1){
      std::cin>>a[i]>>b[i];
    
    }

    std::vector<int>tm(n+1,0);
    for (int i=1;i<=n;i+=1){
      std::cin>>tm[i];
    }

    int ans=0;

    for (int i=1;i<=n;i+=1){
      ans+=a[i]-b[i-1]+tm[i];
      if (i==n) continue;
      ans+=(int)ceil((b[i]-a[i])/2.0);
      if (ans>=b[i]) continue;
      else ans+=b[i]-ans;
      
    }
    std::cout<<ans<<std::endl;
    t-=1;
  }
  
}
