#include <stdio.h>
int main()
 {
  int t;
  int a;
  int b;
  int c;
  int d;
  
  printf("�������ĸ�����: ");
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
  
  if (a>b){
	 t=a;a=b;b=t;
	 }
  if (a>c){ 
     t=a;a=c;c=t;
    }
  if (a>d){ 
	t=a;a=d;d=t;
	}
  if (b>c){ 
	t=b;b=c;c=t;
	}
  if (b>d){ 
	t=b;b=d;d=t;
	}
  if (c>d){
	 t=c;c=d;d=t;
    }
    
  printf("��С��������Ϊ: ");
  printf("%d %d %d %d \n",a,b,c,d);
  
  return 0;
 
 }
 