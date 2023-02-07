//eligibility to vote
#include <stdio.h>
int main()
{
  int citizenship,age;
  printf("Enter your citizenship and age in years ");
  scanf("%d%d",&citizenship&age);
  if(citizenship==kenyan&&age>=18){
    printf("eligible to vote");}
  else{
    printf("not eligible to vote");}
  return 0;
  }
  