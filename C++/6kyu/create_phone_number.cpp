#include <string>

std::string createPhoneNumber(const int arr [10]){
  //your code here
  std::string x="(";
  x+=arr [0]+'0';
  x+=arr [1]+'0';
  x+=arr [2]+'0';
  x+=") ";
  x+=arr [3]+'0';
  x+=arr [4]+'0';
  x+=arr [5]+'0';
  x+="-";
  x+=arr [6]+'0';
  x+=arr [7]+'0';
  x+=arr [8]+'0';
  x+=arr [9]+'0';
  
return x;}
