#include <stdio.h>
int main()
{
int number;
int weishu;
int i1;
int i2;
int i3;
int i4;
int i5;

printf("������һ��������5λ����������");
scanf("%d",&number);

if (number>9999){
    weishu=5;
}else if (number>999){
    weishu=4;
}else if (number>99){
    weishu=3;
}else if (number>9){
    weishu=2;
}
else{
    weishu=1;
}
printf("����������λ��Ϊ��%d\n",weishu);
	
i1=number/10000;
i2=number/1000%10;
i3=number/100%10;
i4=number/10%10;
i5=number%10;

if (weishu==5){
   printf("����������ÿһλ����Ϊ��%d,%d,%d,%d,%d\n",i1,i2,i3,i4,i5);
   printf("����������������Ϊ��%d%d%d%d%d\n",i5,i4,i3,i2,i1);
}else if(weishu==4){
   printf("����������ÿһλ����Ϊ��%d,%d,%d,%d\n",i2,i3,i4,i5);
   printf("����������������Ϊ��%d%d%d%d\n",i5,i4,i3,i2);
}else if(weishu==3){
   printf("����������ÿһλ����Ϊ��%d,%d,%d\n",i3,i4,i5);
   printf("����������������Ϊ��%d%d%d\n",i5,i4,i3);
}else if(weishu==2){
   printf("����������ÿһλ����Ϊ��%d,%d\n",i4,i5);
   printf("����������������Ϊ��%d%d\n",i5,i4);
}
else{
   printf("����������ÿһλ����Ϊ��%d\n",i5);
   printf("����������������Ϊ��%d\n",i5);
}
   return 0;
}