#include "stdio.h"
int main()
{
int grade;

printf("请输入学生成绩：");
scanf("%d",&grade);

if(grade>=90){
   printf("This student's level is A");
}else if(grade>80){
   printf("This student's level is B");
}else if(grade>70){
   printf("This student's level is C");
}else if(grade>60){
   printf("This student's level is D");
} 
else{
printf("This student's level is E");
}
 
return 0;
}
