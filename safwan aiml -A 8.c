#include<stdio.h>
int main()
{
int marks;
printf("enters marks");
scanf("%d",&marks);
 if(marks>=90)
{
 printf("grade A");
}
else if(marks>=75)
{
printf("grand B");
}
else if(marks>=60)
{
printf("grand c");
}
 else if(marks>=40)
 {
  printf("grand D");
  }
  else
  {
  printf("fail");
  }
  return 0;
  }
