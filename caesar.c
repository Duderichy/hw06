/*
The purpose of this program is to take an input of a string that is encrypted
using a caesar cypher and brute force the original message by printing all
possible original messages
*/

#include <stdio.h>
#include <string.h>

void caesar (int key, char message[]);

int main()
{ //Take input of the message or have it late in program???
  int key = 3; // or write in scanf for key (or not)
  // char message = scanf("Enter message to be decyphered: ")
  char message = "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc."
  caesar (int key, char message[])
}

void caesar (int key, char message[])
{
  // this function assumes that spaces are the only non alphabet chars in the string
  int i = 0;
  for ()
  {
    if (message[i] != ' ' && message[i] != 'z');
    {
      message[i] = message[i]++;
    }
    if (message[i] == 'z');
    {
      message[i] = 'a';
    }
    i++
  }
}


//Write module that that cyphers through once, use main to increment through all
// in for loop
// write for loop that iterates for each value of key 0 times for 0 and 1 time
// for 1 etc
