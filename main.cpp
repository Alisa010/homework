#include "ComplexNum.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

  ComplexNum c1{4 , 3};
  ComplexNum c2{5 , 6};
  ComplexNum c3{3 , 9};
  ComplexNum c4{8 , 9};

  std::vector<double> vec;
  vec.push_back(c1.getModues());
  vec.push_back(c2.getModues());
  vec.push_back(c3.getModues());
  vec.push_back(c4.getModues());

	for(int i = 0; i < vec.size(); ++i){
		for(int j = 0; j < vec.size() - 1 - i; ++j){
			  if(vec[j] > vec[j + 1]){
      			       std::swap(vec[j] , vec[j + 1]);
			   }
                 }
         }
  for(int i = 0; i < vec.size() ; ++i){
          std::cout << vec[i] ;
     }

}
