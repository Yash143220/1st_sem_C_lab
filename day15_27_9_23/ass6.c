// wap to find largest word present in a sentence and print its length.
#include <stdio.h>
#include <string.h>

int largestWordLength(char *sentence);

int main()
{
  char sentence[100];
  printf("Enter a sentence: ");
  gets(sentence);

  int largest = largestWordLength(sentence);

  printf("The length of the largest word is: %d\n", largest);

  return 0;
}

int largestWordLength(char *sentence)
{
  int largest = 0;
  int current = 0;
  char current_char;

  while ((current_char = *sentence) != '\0')
  {
    if (current_char == ' ')
    {
      if (current > largest)
      {
        largest = current;
      }
      current = 0;
    }
    else
    {
      current++;
    }
    sentence++;
  }

  if (current > largest)
  {
    largest = current;
  }

  return largest;
}
