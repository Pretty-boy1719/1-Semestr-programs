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

  int n=0;
  std::cin>>n;
  std::string s;

  for (int m=0;m<n;m+=1){
    std::cin>>s;
    if (s.size()<=10){
      std::cout<<s<<std::endl;
      continue;
    }
    
    std::string ans=s[0]+ std::to_string(s.size()-2)+s[s.size()-1];
    std::cout<<ans<<std::endl;
  }
  
}
