#include <stdio.h>
int main()
 {
  int p;
  int r;
  int n;
  int m;
  int temp;
  
  printf("����������������n,m:");
  scanf("%d,%d,",&n,&m);
  
  if (n<m)
   {
    temp=n;
    n=m;
    m=temp;
   }
   
  p=n*m;
  while(m!=0)
   {
    r=n%m;
    n=m;
    m=r;
   }
   
  printf("���ǵ����Լ��Ϊ:%d\n",n);
  printf("���ǵ���С��Լ��Ϊ:%d\n",p/n);
  
  return 0;
 }
 