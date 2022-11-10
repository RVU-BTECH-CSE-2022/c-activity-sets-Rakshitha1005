#include<stdio.h>
int main()
int add(int a, int b)
{
  int a,b;
  printf("Enter the two integers:");
  scanf("%d%d",&a, &b);
  int res=add(a,b);
  printf("%d\n",res);
  }

 int add(int a,int b) 
{
  return a+b;
  
}