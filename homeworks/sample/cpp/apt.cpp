#include<iostream>

int main(){

  int n;
  std::cin >> n;

  int* p = new int[n];

  for(int i=0; i<n; i++){
    std::cin >> p[i]; 
  }

  int low = std::min(p[0],p[1]);
  int sec = std::max(p[0],p[1]);
  
  for(int i=2; i<n; i++){
    if(p[i] < low){
      sec = low;
      low = p[i];
    }
    else if(p[i] < sec){
      sec = p[i];
    }
  }

  std::cout << sec << std::endl;

  return 0;
}
