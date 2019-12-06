#include<stdio.h>
int main()
{
  int num=121;
int rev=0,sum=0;
  while(num!=0)
{
 rev=num%10;
sum=sum*10+num;
 }

if(sum==num)
{
printf("num is palindrome %d ",sum);
}
else
{
printf("num is  not a palindrome %d ",sum);
}
return 0;



}
