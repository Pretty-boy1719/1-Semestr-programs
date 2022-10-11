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
    int temp=0;
    int count=0;
    for (int i=0;i<4;i+=1){
      std::cin>>temp;
      if (temp) count++;
    }
    if (count==4) std::cout<<2<<std::endl;
    if (count==0) std::cout<<0<<std::endl;
    if (count<4 && count>0) std::cout<<1<<std::endl;
    
    t-=1;
  }
  
}
