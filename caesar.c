/*
The purpose of this program is to take an input of a string that is encrypted
using a caesar cipher and brute force the original message by printing all
possible original messages

The last printed statement will be the wanted ciphered message
*/

#include <stdio.h>
#include <string.h>

void caesar (int key, char message[]);

int main()
{ //Take input of the message or have it late in program???
  int key = 26; // or write in scanf for key (or not)
  // char message[] = scanf("Enter message to be deciphered: ")
  char message[] = "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.";
  // char message[] = "abcdefghi j k l m n o p q r s t u v w x y z";
  caesar (key, message);
}

void caesar (int key, char message[])
{

  // this function assumes that spaces, commas, and periods are the only non alphabet chars in the string
  // and also that all chars are lowercase

  int i, j, k = 0;
  int x = strlen(message);

  for (j = 0; j < key; j++)  {
    for (i = 0; i < x; i++)  {
      if (message[i] != ' ' && message[i] != 'z' && message[i] != ',' && message[i] != '.' && message[i] != 'Z') {
        message[i]++;
      }
      else  {
        k = 1;
      }
      if (message[i] == 'z' && k)  {
        message[i] = 'a';
      }
      if (message[i] == 'Z' && k)  {
        message[i] = 'A';
      }
      k = 0;
    }
    printf("%s\n", message);
  }
}


//Write module that that ciphers through once, use main to increment through all
// in for loop
// write for loop that iterates for each value of key 0 times for 0 and 1 time
// for 1 etc
