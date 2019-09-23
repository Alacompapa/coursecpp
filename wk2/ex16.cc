/* 
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  // To map letters to their corresponding (decimal) integral value we use an enum
  char digits[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   
  /*
  size_t radix = stoi(argv[1]);
  size_t input = stoi(argv[2]);
  */
  size_t radix = 5;
  size_t input = 34; 
  string output;

  // Probably better to use a for loop, this is only temporary
  while(true)
  {
    break;
    if(input / radix != 0)
    {
      // Calculate the remainder of this division, that is our digit
      // this number needs to be converted to the right letter (or if its <9 not)
      // and added to the output at the 'start'
      // this digit is more significant than any that went before
      // so we are pushing the numbers to the right
      // we have at least one more iteration to go
      size_t remainder = input % radix;
      char digit = digits[remainder];
      
    } else
    {
      // this means we have reached the end of our divisions and we need to add 
      // one more digit and then break from the loop
      // Is that possible? 
    }
  }

  cout << input << " radix " << radix << " is: " << output << '\n';
}
