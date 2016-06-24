#include <stdio.h>
int main()
{
  char vo;
  printf("Enter a character\n");
  scanf("%c", &vo);
 
  if (vo=='a'||vo=='A'||vo=='e'||vo=='E'||vo=='i'||vo=='I'||vo=='o'||vo=='O'||vo=='u'||vo=='U')
    printf("%c is a vowel.\n", vo);
  else
    printf("%c is not a vowel.\n", vo);
  return 0;
}
