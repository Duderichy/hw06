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
  // char message[] = scanf("Enter message to be decyphered: ")
  // char message[] = "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc."
  char message[] = "abcdefghi j k l m n o p q r s t u v w x y z";
  caesar (key, message[]);
}

void caesar (int key, char message[])
{
  // this function assumes that spaces are the only non alphabet chars in the string
  // and also that all chars are lowercase
  int i = 0;
  int j = 0;
  int x = strln(message[]);

  for (j < key, j++)
  {
    for (i < x, i++)
    {
      if (message[i] != ' ' && message[i] != 'z')
      {
        message[i] = message[i]++;
      }
      if (message[i] == 'z')
      {
        message[i] = 'a';
      }
      i++;
    }
  }

  printf("%s", message[]);

}


//Write module that that cyphers through once, use main to increment through all
// in for loop
// write for loop that iterates for each value of key 0 times for 0 and 1 time
// for 1 etc
