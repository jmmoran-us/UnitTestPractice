#include "Practice.h"
#include <string>

using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  //solution gotten from
  // https://stackoverflow.com/questions/4367745/simpler-way-of-sorting-three-numbers
  //used the swap method and switched > for <
  //and wrote out the swap function rather than using the built in swap method
  if (first < third)
  {
    int temp = first;
    first = third;
    third = temp;
  }
  if (first < second)
  {
    int temp = first;
    first = second;
    second = temp;
  }
  if (second < third)
  {
    int temp = second;
    second = third;
    third = temp;
  }
  
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  for(unsigned int i=0; i < input.size(); i++)
  {
    if( input[i] < 'A' || input[i] > 'Z' )
    {
      //change lower case to upper case
      input[i] = input[i] - ('a' - 'A');
    }
  }

  bool match = false;

  if (input.length() == 0) {
    match = true; //according to google, empty string is a palindrome
  }
  else {
    for(unsigned int i=0; i < input.size()/2; i++)
    {
      if( input[i] == input[input.size()-1-i] )
        match = true;
      else
        match = false;
    }
  }
  return match;
}

// This function receives a string and counts how many times the same character
// is repeated at the beginning of the string, before any other characters. The
// function is case sensative so 'Z' is different than 'z'.
int Practice::count_starting_repeats(string word)
{
    int repetition = 0;
    int index = 0;
    char letter;

    if( word.length() > 0 )
      letter = word[0];

    for(unsigned int i=1; i < word.length(); i++){
      if( word[i] == letter ){
        repetition++;
      }
    }    

    return repetition;
}
