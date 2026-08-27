int expression_matter(int a, int b, int c) {
  
 int r1,r2,r3,r4,r5,r6;
  r1= a+b+c;
  r2=a*b*c;
  r3=a+b*c;
  r4=(a+b)*c;
  r5=a*b+c;
  r6= a*(b+c)  ;
  int max;
   if (r2 > r1) {
     max=r2;
    }
  else{max=r1;}
  if (r3>max){
   max=r3;
   }
    if (r4>max){
   max=r4; }
    if (r5>max){
      max=r5;
        }
    if (r6>max){
       max=r6;
         }
  return max;
}
