/* This exercise will share a lot of code with Ex14 I expect.
 * Here we will also need a good way to represent a binary number, being able to 
 *   manipulate it. But to my knowledge there is not a binary type in C++.
 *
 * INPUT: integral value repr as binary : 01101
 *        ror or rol
 *
 * Note that we cannot use our self-defined functions yet in this exercise.
 *
 * Solution idea:
 *   Case "ror":
 *     check least sign bit (LSB) (num % 2 == 0)
 *     shift num right (num >> 1)
 *     logical or num with result of LSB shifted left with as many places as bits in num -1
 *       note that if the result of LSB is 0 we dont have to do anything
 *     That would give the correct answer
 *
 *     Example with 5 (101)
 *     5 % 2 = 1
 *     5 >> 1 = 2 (101 >> 1 = 010)
 *     now the hard part, bits in 5 = 3, 3-1=2
 *     LSB << 2 same as 1 << 2 same as 001 << 2 = 100 
 *     010 
 *     100 or
 *     110
 *     which is what we expect
 *   Case "rol":
 *     check GSB
 *     shift left (num << 1)
 *     logical or num with result shifted right as many...
 *
 *
 * Converting to Dec and Hex:
 *   Dec:
 *     for(up to incl numbits)
 *       check if bit@place is 1 (number % 10)
 *       true then then total += 2^place (1 << place) 
 *   
 *   Hex:
 *     I think it's something to do with taking bits in groups of four (2^4 = 16)
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
  string binnumber = argv[1];
  size_t numbits = binnumber.length();
  size_t value = stoi(binnumber);

  size_t intvalue = 0;
  // We now get the decimal value of the binary argument
  for(size_t place = 0, valcpy = value; place < numbits; ++place, valcpy /= 10)
  {
    if(valcpy % 10 == 1) // Check if the least significant bit is 1 or 0
    {
      intvalue += 1 << place; // In binary every bit signifies 2^place
    }
  }
  cout << intvalue << endl;




  if(argv[2] == "ror")
  {
    if(value % 10 == 1) // Check if the least significant digit is 1
    {
      size_t newValue = (value / 10) + pow(10, numbits);
    } else 
    {
      size_t newValue = value / 10;
    }

    for(size_t place = 1; place <= numbits; ++place)
    {

    }
  } else if(argv[2] == "rol")
  {
  }
}
