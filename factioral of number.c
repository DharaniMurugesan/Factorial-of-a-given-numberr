#include<stdio.h>
#include<conio.h>
void main(){
int fact=1,a,i,n;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++){
fact=fact*i;
}
printf("the factorial of a given number is:%d",fact);
getch();
}
