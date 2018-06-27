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

printf("请输入一个不多于5位的正整数：");
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
printf("该正整数的位数为：%d\n",weishu);
	
i1=number/10000;
i2=number/1000%10;
i3=number/100%10;
i4=number/10%10;
i5=number%10;

if (weishu==5){
   printf("该正整数的每一位数字为：%d,%d,%d,%d,%d\n",i1,i2,i3,i4,i5);
   printf("该正整数的逆序数为：%d%d%d%d%d\n",i5,i4,i3,i2,i1);
}else if(weishu==4){
   printf("该正整数的每一位数字为：%d,%d,%d,%d\n",i2,i3,i4,i5);
   printf("该正整数的逆序数为：%d%d%d%d\n",i5,i4,i3,i2);
}else if(weishu==3){
   printf("该正整数的每一位数字为：%d,%d,%d\n",i3,i4,i5);
   printf("该正整数的逆序数为：%d%d%d\n",i5,i4,i3);
}else if(weishu==2){
   printf("该正整数的每一位数字为：%d,%d\n",i4,i5);
   printf("该正整数的逆序数为：%d%d\n",i5,i4);
}
else{
   printf("该正整数的每一位数字为：%d\n",i5);
   printf("该正整数的逆序数为：%d\n",i5);
}
   return 0;
}