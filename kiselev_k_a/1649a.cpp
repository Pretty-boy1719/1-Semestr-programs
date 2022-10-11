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
    std::vector<int> a(n,0);

    int l=-1,r=n+1;
    for (int i=0;i<n;i+=1){
      std::cin>>a[i];
      if (l==-1 && a[i]==0) l=i;
      if (a[i]==0) r=i;
    }

    int ans=0;
    if (l!=-1)ans=r-l+2;
    
    std::cout<<ans<<std::endl;
    t-=1;
  }
  
}
