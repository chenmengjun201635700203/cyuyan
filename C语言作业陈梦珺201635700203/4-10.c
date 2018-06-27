#include <stdio.h>
 main()
{	
double lirun;	
double jiangjin;

printf("利润为：");
scanf("%d",&lirun) ;

if (lirun>1000000){
jiangjin=100000*0.1+(200000-100000)*0.075+(400000-200000)*0.05+(600000-400000)*0.03+(1000000-600000)*0.015+(lirun-1000000)*0.01;
}else if(lirun>600000 && lirun<=1000000){
jiangjin=100000*0.1+(200000-100000)*0.075+(400000-200000)*0.05+(600000-400000)*0.03+(lirun-600000)*0.015;
}else if(lirun>400000 && lirun<=600000){	
jiangjin=100000*0.1+(200000-100000)*0.075+(400000-200000)*0.05+(lirun-400000)*0.03;	
}else if(lirun>200000 && lirun<=400000){		
jiangjin=100000*0.1+(200000-100000)*0.075+(lirun-200000)*0.05;		
}else if(lirun>100000 && lirun<=200000){		
jiangjin=100000*0.1+(lirun-100000)*0.075;		
}
else {		
jiangjin=lirun*0.1;		
}
	
printf("奖金为：%d",jiangjin);	

return 0;

}
