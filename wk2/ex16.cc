/* 
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  // To map letters to their corresponding (decimal) integral value we use an enum
  enum Lnums { a = 10, b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z };
  Lnums value = z;
  std::cout << z;
  
  size_t input = argv[1];
  size_t radix = argv[2];
  string output;

  // Probably better to use a for loop, this is only temporary
  while(true)
  {
    // NOTE :: Can we use integer division like this? We want it to throw away the remainder
    // I think this works but test this
    if(input / radix != 0)
    {
      // Calculate the remainder of this division, that is our digit
      // this number needs to be converted to the right letter (or if its <9 not)
      // and added to the output at the 'start'
      // this digit is more significant than any that went before
      // so we are pushing the numbers to the right
      // we have at least one more iteration to go
    } else
    {
      // this means we have reached the end of our divisions and we need to add 
      // one more digit and then break from the loop
      // Is that possible? 
    }
  }

  cout << input << " radix " << radix << " is: " << output << '\n';
}
