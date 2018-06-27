#include <stdio.h>
int main()
{
int lirun;
double jiangjin;
double jiangjin1;
double jiangjin2;
double jiangjin4;
double jiangjin6;
double jiangjin10;
int n;

printf("请输入利润I：");
scanf("%d",&lirun) ;

jiangjin1=100000*0.1;
jiangjin2=jiangjin1+(200000-100000)*0.075;
jiangjin4=jiangjin2+(400000-200000)*0.05;
jiangjin6=jiangjin4+(600000-400000)*0.03;
jiangjin10=jiangjin6+(1000000-600000)*0.015;

n=lirun/100000;

if(n>10) n=10;
switch(n)
{
case 0:jiangjin=lirun*0.1;break;
case 1:jiangjin=jiangjin1+(lirun-100000)*0.075;break;
case 2:
case 3:jiangjin=jiangjin2+(lirun-200000)*0.05;break;
case 4:
case 5:jiangjin=jiangjin4+(lirun-400000)*0.03;break;
case 6:
case 7:
case 8:
case 9:jiangjin=jiangjin6+(lirun-600000)*0.015;break;
case 10:jiangjin=jiangjin10+(lirun-1000000)*0.01;

}

printf("应发奖金为：%10.2f",jiangjin);

return 0;
}
